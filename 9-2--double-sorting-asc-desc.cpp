#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
typedef int larik [250000];
int n, p=0;
larik y;
clock_t startclock, finishclock;
double counttime;

void tukardata(int &a, int &b) {
    int t;
    t = a;
    a = b;
    b = t;
}

void buatdata(int x[], int &n) {
    srand(time(NULL));
    
    for (int i=0; i<n; i++) {
        x[i] = rand() % 100+1;
    }
}

void copyy (int asal[], int tujuan[], int n) {
    for (int i=0; i<n; i++) {
        tujuan[i] = asal[i];
    }
}

void inssortasc(larik x, int n) {
    int i, j, a;
    for (i=0; i<n; i++) {
        j = i-1;
        a = x[i];
        while (j >=0 && x[j]>a) {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = a;
    }
}

void inssortdes(larik x, int n) {
    int temp, j;
    for (int i=0; i<n; i++) {
        temp = x[i];
        j = i-1;
        while (x[j] < temp && j >= 0) {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = temp;
    }
}

void selsortasc(larik x, int n) {
    int min, i, j, temp;
    for (i=0; i<n-1; i++) {
        min = i;
        for (j=i+1; j<n; j++) 
        if (x[j] < x[min]) {
            min = j;
        }
        temp = x[i];
        x[i] = x[min];
        x[min] = temp; //nuker data
    }
}

void selsortdes(larik x, int n) {
    int min, i, j, temp;
    for (i=n-1; i>0; i--) {
        min = 0;
        for (j=1; j<=i; j++) 
        if (x[j] < x[min]) {
            min = j;
        }
        temp = x[min];
        x[min] = x[i];
        x[i] = temp; //nuker data
    }
}
void printarr (int x[], int n) {
    for (int i=0; i<n; i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Masukkan banyaknya data: ";
    cin>>n;
    int x[n];
    int z[n];
    int w[n];
    int u[n];

    buatdata(x, n);
    for (int i=0; i<n; i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    copyy(x, z, n);
    copyy(x, w, n);
    copyy(x, u, n);

    startclock = clock();
    inssortasc (x, n);
    finishclock = clock();
    counttime = finishclock - startclock;
    
    startclock = clock();
    inssortdes (z, n);
    finishclock = clock();
    double counttime2 = finishclock - startclock;
  
    startclock = clock();
    selsortasc (w, n);
    finishclock = clock();
    double counttime3 = finishclock - startclock;

    startclock = clock();
    selsortdes (u, n);
    finishclock = clock();
    double counttime4 = finishclock - startclock;

    cout<<"Hasil pengurutan data secara ascending dengan metode insertion sort: "; printarr(x, n);
    cout<<counttime<<"ms"<<endl;
    cout<<"Hasil pengurutan data secara descending dengan metode insertion sort: "; printarr(z, n);
    cout<<counttime2<<"ms"<<endl;
    cout<<"Hasil pengurutan data secara ascending dengan metode selection sort: "; printarr(w, n);
    cout<<counttime3<<"ms"<<endl;
    cout<<"Hasil pengurutan data secara descending dengan metode selection sort: "; printarr(u, n);
    cout<<counttime4<<"ms"<<endl;
    
    return 0;
}
