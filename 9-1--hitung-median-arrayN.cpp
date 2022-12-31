#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    float median;
 
    cout<<"Masukkan jumlah data: ";
    cin>>n;
 
    int nilai[n];
    int i;
 
    cout<<"Masukkan angka: \n";
    for (i=0; i<n; i++){
        cout<<"Angka ke-"<<i+1<<": ";
        cin>>nilai[i];
    }
    sort(nilai, nilai+n);
    cout<<"Data terurut: "<<endl;
    for (i=0; i<n; i++){
        cout<<"Angka ke-"<<i+1<<": "<<nilai[i]<<endl;
    }
    if (n%2 == 0){
        median = (float(nilai[n/2]) + float(nilai[(n/2)-1])) / 2;
    }  
    else {
        median = nilai[n/2];
    }
    cout<<endl<<"Median = "<<median;
    return 0;
}
