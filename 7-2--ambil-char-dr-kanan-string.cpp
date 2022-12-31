#include <iostream>
using namespace std;

void string_from_right (string st, int n){
    int i, l;
    l=st.length();
    for (i=0; i<l; i++) {
        if (i>=l-n ){
            cout<<st[i];
        }
    }
}

int main() {
    string kata;
    int n;
    cout<<"Masukkan sebuah kata: ";
    cin>>kata;
    cout<<"Masukkan jumlah n yang akan ditarik dari kata: ";
    cin>>n;

    string_from_right(kata, n);
}
