#include <iostream>
using namespace std;
void balik(int angka) {
    if (angka<10) {
        cout << angka;
    }
    else {
        cout << angka%10;
        balik(angka/10);
    }
}

int main() {
  int angka;
  cout<<"Masukkan bilangan: ";
  cin>>angka;
  balik(angka);
  return 0;
}
