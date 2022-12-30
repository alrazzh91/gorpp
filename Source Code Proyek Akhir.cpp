#include <iostream> //stream header standar input output
#include <conio.h> //user interface (getch, getche, clrscr, gotoxy)
#include <dos.h> //handling interrupts (sleep)
#include <windows.h> //system(), calling statement in the cmd
using namespace std;

	int play();
	void guess();
	void win();
	void lose();


void gotoxy(int x, int y) {
	static HANDLE h = NULL;  
	if(!h)
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };  
	SetConsoleCursorPosition(h,c);
}

void instructions(){
	system("cls");
	gotoxy(5,2);cout<<"Instruksi permainan: ";
	gotoxy(5,4);cout<<"Anda harus menebak satu kata dari susunan puzzle huruf acak yang muncul.";
    gotoxy(5,5);cout<<"Anda dapat meminta clue berupa panjang kata tersebut pada menu yang tersedia.";
	gotoxy(5,5);cout<<"Anda memiliki 3x kesempatan menjawab. Jika kalah Anda dapat mencoba memainkannya lagi.";
	gotoxy(5,7);cout<<"Tekan apapun untuk kembali ke menu ...";
	getch();
}

int play(){
	
    int chance=3;
    string answer;
	string output;
	string a[10]={"elins", "ugm", "gadjah", "mada", "code", "binary", "sort", "hashing", "fmipa", "cool"};
    char arr[10][10];
	
	system("cls");
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;
            int r;
            r= rand() % 26;   // generate a random number
            c= 'a' + r;       // Convert to a character from a-z
            arr[i][j]=c;
        }
    }
    
    int index=rand()%10;
    output=a[index];
    if(a[index].length()%2==0){
        int row=rand()%7;
        int col=rand()%7;
            for(int i=0;a[index][i]!='\0';i++,col++) {
                arr[row][col]=a[index][i];
            }
    }
    
    else{
        int row=rand()%10;
        int col=rand()%10;
        for(int i=0;a[index][i]!='\0';i++,row++){
            arr[row][col]=a[index][i];
        }
    }
	
	for(int i=0;i<10;i++){
        gotoxy(5,2+i);
		for(int j=0;j<10;j++){
        	cout<<" "<<arr[i][j];
          	Sleep(20);
        }
        cout<<endl;
    }
	
    gotoxy(32,2);cout<<"1. Tebak";
	gotoxy(32,3);cout<<"2. Minta clue";
	gotoxy(32,4);cout<<"3. Keluar";
	label1:
	int line=5;
	gotoxy(32,line);cout<<"Mana opsi yang Anda mau? ";
	line++;
	char op = getche();
		if( op == '1'){
			line++;
		    tryagain:		
			gotoxy(32,line);cout<<"Jawaban: ";
			cin>>answer;
		
			line++;
			if(answer == a[index]){
		        win();
			}
			    
			else{
			    gotoxy(32,line);cout<<"OOPSS! Kata yang Anda tebak salah. Ayo coba lagi!"<<endl;
			    line+=2;
			    chance--;
			    if (chance==0)
					{
						lose();
					}
			    else{
			    	goto tryagain;
				}
			}
		}
		
		else if( op == '2'){
			gotoxy(32,line);cout<<"Panjang kata yang harus ditebak adalah: ";
       		cout<<output.size();
       		line+=2;
       		goto tryagain;
		}
		
		else if( op == '3'){
			gotoxy(0,line+4);
			exit(0);
		}

       else{
    		goto label1;
		}
}


void win()
{
	system("cls");
	gotoxy(5,2);cout<<"--------------------------------------------------";
	gotoxy(5,3);cout<<"------- HOREEE jawaban Anda benar! YOU WIN -------";
	gotoxy(5,4);cout<<"--------------------------------------------------";
	gotoxy(5,6);cout<<"Tekan 1 untuk main lagi";
	gotoxy(5,7);cout<<"Tekan apapun untuk kembali ke menu ...";
	char op = getche();
	if( op=='1') play(); 
}

void lose()
{
	system("cls");
	gotoxy(5,2);cout<<"--------------------------------------------------";
	gotoxy(5,3);cout<<"-- OOPSS! Kesempatan Anda telah habis. YOU LOSE! --";
	gotoxy(5,4);cout<<"--------------------------------------------------";
	gotoxy(5,6);cout<<"Tekan 1 untuk main lagi";
	gotoxy(5,7);cout<<"Tekan apapun untuk kembali ke menu ...";
	char op = getche();
	if( op=='1') play(); 
}

int main(){
	do{
		system("cls");
		gotoxy(5,2);cout<<" -------------------------- "; 
		gotoxy(5,3);cout<<" |       Tebak Kata       | "; 
		gotoxy(5,4);cout<<" --------------------------";
		gotoxy(5,5);cout<<"1. Mulai";
		gotoxy(5,6);cout<<"2. Instruksi";	 
		gotoxy(5,7);cout<<"3. Keluar";
		gotoxy(5,9);cout<<"Pilih menu: ";
		
		char op = getche();
		if( op=='1') play(); 
		else if( op=='2') instructions();
		else if( op=='3') exit(0);
	}
	while(1);
	
	return 0;
}
