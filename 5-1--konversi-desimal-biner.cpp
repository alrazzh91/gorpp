#include <iostream>
using namespace std;
int main() {
    int Array[100], n, i;
    
    cout<<"Insert a number : ";
    cin>>n;
    
    for (i=0; n>0; i++) {
        Array[i] = n%2;
        n=n/2;
    }
    
    cout<<"The result of number " <<n<<" in binary is: ";
    for (i=i-1; i>=0; i--) {
        cout<<Array[i]<<" ";
    }
    
    cout<<endl;
    
    return 0;
}
