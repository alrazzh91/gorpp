#include <iostream>
using namespace std;
int fibo(int n) {
    if (n == 0 || n == 1){
        return n;
    }
    else {
        return (fibo (n-1) + fibo (n-2));
    }
}

int main() {
    int n;
    cout<<"Masukkan bilangan: ";
    cin>>n;
    cout<<"Bilangan fibonnaci ke-"<<n<<" adalah: "<<fibo(n);
    return 0;
}
