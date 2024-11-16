#include <iostream>
using namespace std;

class mobil {
public:
    string merk;
    string model;
    int tahun;
    int kecepatan;
    void tampilkanInfo() {
        cout << "Merk: " << merk << ", model: " << model << ", tahun: " << tahun << endl;
    }
    void tambah_kecepatan (int v){
        kecepatan += v;
        cout << "pertambahan kecepatan: " << v << endl;
        cout << "kecepatan sekarang: " << kecepatan << endl;
    }
    void kurangi_kecepatan (int v){
        kecepatan -= v;
        cout << "pengurangan kecepatan: " << v << endl;
        cout << "kecepatan sekarang: " << kecepatan << endl;
    }
};

int main() {
    mobil mobil1;
    mobil1.merk = "Toyota";
    mobil1.model = "Camry";
    mobil1.tahun = 2021;
    mobil1.tampilkanInfo();
    mobil1.tambah_kecepatan (100);
    mobil1.tambah_kecepatan (100);
    mobil1.tambah_kecepatan (100);
    mobil1.kurangi_kecepatan (80);
    mobil1.kurangi_kecepatan (90);
    mobil1.kurangi_kecepatan (55);
    return 0;
}