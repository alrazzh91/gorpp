#include <iostream>
using namespace std;
struct zodiak{
    int bulan;
    int tanggal;
};

int main() {
    zodiak zk;
    
    cout<<"Masukkan tanggal lahir Anda: ";
    cin>>zk.tanggal;
    cout<<"Masukkan bulan lahir Anda (dalam angka): ";
    cin>>zk.bulan;

        if ((zk.tanggal >=20 && zk.bulan==1) || (zk.tanggal <=18 && zk.bulan==2)) {
            cout<<"Aquarius";
        }
        if ((zk.tanggal >=19 && zk.bulan==2) || (zk.tanggal <=20 && zk.bulan==3)) {
            cout<<"Pisces";
        }
        if ((zk.tanggal >=21 && zk.bulan==3) || (zk.tanggal <=19 && zk.bulan==4)) {
            cout<<"Aries";
        }
        if ((zk.tanggal >= 20 && zk.bulan==4) || (zk.tanggal <=20&& zk.bulan==5)) {
            cout<<"Taurus";
        }
        if ((zk.tanggal >=21 && zk.bulan==5) || (zk.tanggal <=20 && zk.bulan==6)) {
            cout<<"Gemini";
        }
        if ((zk.tanggal >=21 && zk.bulan==6) || (zk.tanggal <=22 && zk.bulan==7)) {
            cout<<"Cancer";
        }
        if ((zk.tanggal >=23 && zk.bulan==7) || (zk.tanggal <=22 && zk.bulan==8)) {
            cout<<"Leo";
        }
        if ((zk.tanggal >=23 && zk.bulan==8) || (zk.tanggal <=22 && zk.bulan==9)) {
            cout<<"Virgo";
        }
        if ((zk.tanggal >=23 && zk.bulan==9) || (zk.tanggal <=22 && zk.bulan==10)) {
            cout<<"Libra";
        }
        if ((zk.tanggal >=23 && zk.bulan==10) || (zk.tanggal <=21 && zk.bulan==11)) {
            cout<<"Scorpio";
        }
        if ((zk.tanggal >=22 && zk.bulan==11) || (zk.tanggal <=21 && zk.bulan==12)) {
            cout<<"Sagitarius";
        }
        if ((zk.tanggal >=22 && zk.bulan==12) || (zk.tanggal <=19 && zk.bulan==1)){
            cout<<"Capricorn";
        }
    
    return 0;
}

