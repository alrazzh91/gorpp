#include <iostream>
using namespace std;
int FPB(int a, int b);
int main() {
    int a, b;
    cout<<"Masukkan 2 bilangan (a, b)"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<FPB(a, b);
}

int FPB (int a, int b){
    if (b != 0) {
        return FPB(b, a%b);
    }
    else {
        return a;
    }
}
