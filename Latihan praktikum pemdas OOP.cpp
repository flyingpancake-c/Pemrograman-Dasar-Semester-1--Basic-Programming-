#include <iostream>
using namespace std;

/*struct Mahasiswa{
    string nama;
    int umur;
    float nilaiAkhir;
};

int main() {
    Mahasiswa mhs1;
    mhs1.nama = "Afif";
    mhs1.umur = 19;
    mhs1.nilaiAkhir = 3.75;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;
    cout << "Nilai: " << mhs1.umur << endl; 
}*/

class Mahasiswa {
private:
    int umur;
    string nama;
public:
    void setinfo(string n, int u) {
        nama = n;
        umur = u;
    }

    void displayinfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " <<  umur << endl;
    }
};

class student : public Mahasiswa{
private:
    string status;
    float nilaiAkhir;
public:
    void setnilai(float g){
        nilaiAkhir = g;
    }

    void displaynilai() {
        cout << "Nilai: " << nilaiAkhir << endl;
    }

    void displaylulus() {
        if (nilaiAkhir >= 60) {
            cout << "Lulus" << endl;
        }
        else {
            cout << "Tidak lulus" << endl;
        }
    }
};

int main() {
    student mhs1;
    mhs1.setinfo("Afif Rafi Ardiyanto", 19);
    mhs1.setnilai(100);
    mhs1.displayinfo();
    mhs1.displaynilai();
    mhs1.displaylulus();
    cout << "-------------------------------------------------------" << endl;
    
    student mhs2;
    mhs2.setinfo("Andi Setiawan", 18);
    mhs2.setnilai(50);
    mhs2.displayinfo();
    mhs2.displaynilai();
    mhs2.displaylulus();
}