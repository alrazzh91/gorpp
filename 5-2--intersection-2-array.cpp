#include <iostream>
using namespace std;
int main() {
    int A[50];
    int B[50];
    int i, j, n;
    
    cout<<"Insert the length of array:"<<endl;
    cin>>n;
    cout<<endl;
    
    cout<<"Enter elements of array 1:"<<endl;
    for (i=1; i<=n; i++) {
        cout<<"enter element a"<<i<<" : ";
        cin>>A[i];
    }
    cout<<endl;
    
    cout<<"Enter elements of array 2:"<<endl;
    for (j=1; j<=n; j++) {
        cout<<"enter element b"<<j<<" : ";
        cin>>B[j];
    }
    
    cout<<endl<<"Intersection:"<<endl;
    for (i=0; i<=n; i++) {
        for (j=0; j<=n; j++) {
            if (A[i] == B[j]) {
            cout<<A[i]<<endl;
            }
        }
    }
    
    return 0;
}
