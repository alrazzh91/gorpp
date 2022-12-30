#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int angka[20]= {10, 25, 44, 50, 41, 42, 49, 10, 15, 38, 7, 45, 12, 15, 41, 48, 40, 44, 22, 39};
    int cari; int i;
    int jumlah = 0;

    cout<<"Cari angka: ";
    cin>>cari;  

    for (int i=0; i<20; i++) {
        if (angka[i] > cari) {
            jumlah ++;
            cout<<angka[i]<<" ";
        }
    }
    if (jumlah > 0) {
        cout<<"Data pada angka yang lebih besar dari 25 sebanyak: "<<jumlah;
        cout<<angka[i]<<" ";
    }
    else {
        cout<<"not found";
    }
}
