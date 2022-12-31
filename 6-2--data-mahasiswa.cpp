#include <iostream>
using namespace std;
struct mahasiswa {
    int student_id;
    float midterm_score;
    float finalexam_score;
};

int main() {
    int n, i;
    float jumlah, rerata;
    mahasiswa mhs[50];

    cout<<"Masukkan jumlah mahasiswa (max=50): ";
    cin>>n;
    
    for (i=0; i<n; i++) {
        cout<<"Masukkan ID Mahasiswa: " ;
        cin>>mhs[i].student_id;
        cout<<"Masukkan Nilai Ujian Tengah Semester: " ;
        cin>>mhs[i].midterm_score;
        cout<<"Masukkan Nilai Ujian Akhir: " ;
        cin>>mhs[i].finalexam_score;
        cout<<endl;
    }

    for (i=0; i<n; i++) {
        jumlah = (mhs[i].midterm_score + mhs[i].finalexam_score);
        rerata = jumlah/2;

        cout<<"Hasil"<<endl;
        cout<<"ID Mahasiswa: "<<mhs[i].student_id<<endl;
        cout<<"Rata-rata: "<<rerata<<endl;
        cout<<endl;
    }

    return 0;
}
