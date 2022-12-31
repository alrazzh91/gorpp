#include <iostream>
using namespace std;
int cek(string n, int i, int j) {
    int k = j/2;

    if (j==k) {
        cout<<"Palindrom"<<endl;
        return 0;
    }
    else if (n[i] != n[j]) {
        cout<<"Bukan Palindrom"<<endl;
        return 0;
    }
    else {
        return cek(n, i+1, j-1);
    }
}

int main() {
    string kata;
    int d;
    cout<<"Masukkan kata: ";
    getline(cin, kata);
    d = kata.length()-1;
    cout<<cek(kata, 0, d);
    return 0;
}
