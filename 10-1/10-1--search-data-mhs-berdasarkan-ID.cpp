 #include <iostream>
using namespace std;
struct mahasiswa {
    int id;
    string nama;
    float score;
};

int main() {
mahasiswa mhs[12];
int i=0, j=11;
long int cari; int mid;
bool found = false;
    mhs[0].id = 408599;
    mhs[1].id = 403189;
    mhs[2].id = 405462;
    mhs[3].id = 406703;
    mhs[4].id = 400324;
    mhs[5].id = 404342;
    mhs[6].id = 404342;
    mhs[7].id = 401339;
    mhs[8].id = 405509;
    mhs[9].id = 400522;
    mhs[10].id = 404878;
    mhs[11].id = 404878;

    mhs[0].nama ="Cecilio Schubart";
    mhs[1].nama ="Desiri Chalker";
    mhs[2].nama ="Falkner Carder";
    mhs[3].nama ="Delainey Ruckhard";
    mhs[4].nama ="Colette Abramovic";
    mhs[5].nama ="Irwinn Bussey";
    mhs[6].nama ="Terrie Whitaker";
    mhs[7].nama ="Gary Binestead";
    mhs[8].nama ="Ferris Fulbrook";
    mhs[9].nama ="Diane Bissill";
    mhs[10].nama ="Ricoriki Jiroutka";
    mhs[11].nama ="Reidar Putten";

    mhs[0].score = 93;
    mhs[1].score = 90;
    mhs[2].score = 75;
    mhs[3].score = 89;
    mhs[4].score = 92;
    mhs[5].score = 81;
    mhs[6].score = 83;
    mhs[7].score = 77;
    mhs[8].score = 91;
    mhs[9].score = 77;
    mhs[10].score = 93;
    mhs[11].score = 89;

    for (int i = 1; i < 12; i++) {
    for (int j = 1; j < i; j++) {
        if (mhs[j].id > mhs[i].id) {
            for (int i = 0; i < 12; i++) {
            for (int j = 0; j < i; j++) {
                if (mhs[j].id > mhs[i].id) {
                    swap (mhs[j].id, mhs[i].id);
                    swap (mhs[j].nama, mhs[i].nama);
                    swap (mhs[j].score, mhs[i].score);
                }
            }
            }
        }
    }
    }   
    cout<<"Data setelah diurutkan: "<<endl;
        for (int i=0; i<12; i++) {
            cout<<mhs[i].id<<" "<<mhs[i].nama<<" "<<mhs[i].score<<endl;
        }
    cout<<endl;

    cout<<"Masukkan ID yang akan dicari: ";
    cin>>cari;

    while(!found && i<=j){
        mid = (i+j)/2;
        if(mhs[mid].id < cari){
            i = mid+1;
        }
        else if(mhs[mid].id == cari){
            found = true;
            cout <<"Data mahasiswa tersebut adalah: "<<mhs[mid].id<<" "<<mhs[mid].nama<<" "<<mhs[mid].score;
        }
        else if (mhs[mid].id > cari){
            j = mid-1;
        }
        else {
            cout<<"data not found";
        }
    }
return 0;
}

