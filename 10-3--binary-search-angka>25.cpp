#include <iostream>
using namespace std;
void sort(int data[], int n);
void search(int data[], int n, int num);

int main(){
    int num;
    int data[]= {10, 25, 44, 50, 41, 42, 49, 10, 5, 38, 7, 45, 12, 15, 41, 48, 40, 44, 22, 39};
    int n= sizeof(data)/sizeof(data[0]);
 
    cout<<"Masukkan angka yang dicari: ";
    cin>>num;
    search(data, n, num);
}

void sort(int data[], int n){
     for(int i= 1; i<n; i++){
        int cari = data[i];
        int j= i-1;
        while(j>=0 && data[j] > cari){
            data[j+1] = data[j];
            j--;
        }
        data[j+1]=cari;
     }
}

void search(int data[], int n, int num){
    sort (data, n);
    int l= 0, r= n-1;
    while(l<=r){
      int mid =(l+r)/2;
        if(data[mid]==num){
            cout<<"Angka pada data yang lebih besar dari " <<num<<" sebanyak: "<<n-mid-1;
            return;
        }
        else if(data[mid] < num) l=mid+1;
        else r = mid-1;
        }
 }

