#include <iostream>
using namespace std;
int main() {
    int x[2][2], y[2][2], h[2][2];
    int i,j;
    
    for (i=1; i<=2; i++) {
        for (j=1; j<=2; j++) {
            h[i][j] = 0;
        }
    }

    cout<<"Enter element of matrix 1: "<<endl;
    for(i=1; i<=2; i++) {
        for(j=1; j<=2; j++) {
            cout<<"Enter element a"<<i<<j<<" : ";
            cin>>x[i][j];
        }
    }
    cout<<endl;
    
    cout<<"Enter element of matrix 2: "<< endl;
    for(i=1; i<=2; i++) {
        for(j=1; j<=2; j++) {
            cout<<"Enter element b"<<i<<j<<" : ";
            cin>>y[i][j];
        }
    }
    cout<<endl;
    
    cout<<"Matrix 1:"<<endl;
    cout<<x[1][1]<<" "<< x[1][2]<<endl;
    cout<<x[2][1]<<" "<< x[2][2]<<endl;
    cout<<endl;
    
    cout<<"Matrix 2:"<<endl;
    cout<<y[1][1]<<" "<< y[1][2]<<endl;
    cout<<y[2][1]<<" "<< y[2][2]<<endl;
 
    for (i=1; i<=2; i++) {
        for (j=1; j<=2; j++) {
            for (int k=1; k<=2; k++) {
                h[i][k] += x[i][j]*y[j][k];
            }
        }
    }
    cout <<endl;
    
    cout<<"Output matrix: "<<endl;
    cout<<h[1][1]<<"\t"<< h[1][2]<<endl;
    cout<<h[2][1]<<"\t"<< h[2][2]<<endl;
     
    return 0;
}

