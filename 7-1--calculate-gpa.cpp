#include <iostream>
using namespace std;
float calculate_gpa (int nilai[], int SKS[], int n) {
    float GPA, jsks=0, total=0; 
    int i;

    for (i=0; i<n; i++) {
        jsks += SKS[i];
        total += (nilai[i] * SKS[i]);
        GPA = total/jsks;
    }
    return GPA;
}

int main() {
    int n;
    cout<<"Masukkan banyak nilai: ";
    cin>>n;
    int nilai[n]; int SKS[n]; float GPA; int i; char detail;
    cout<<"Score: ";

    for (i=0; i<n; i++) {
        cin>>detail;
        switch (detail){
        case 'A': nilai[i]=4;
            break;
        case 'B': nilai[i]=3;
            break;
        case 'C': nilai[i]=2;
            break;
        case 'D': nilai[i]=1;
            break;
        case 'E': nilai[i]=0;
            break;
        }
    }

    cout<<"SKS: ";
    for (i=0; i<n; i++) {
        cin>>SKS[i];
    }

    GPA = calculate_gpa(nilai, SKS, n);
        cout<<"GPA: "<<GPA;
    
    }
