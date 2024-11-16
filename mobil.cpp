#include<iostream>
using namespace std;

// Definisi class `Mobil`
class Mobil {
public:
    string merk;
    string model;
    int tahun;
    int kecepatan = 0;
    // Method untuk menampilkan informasi mobil
    void tampilkanInfo() {
        cout << "Merk: " << merk << ", Model: " << model << ", Tahun: " << tahun << endl;
    }
    void tambah_kecepatan(int v){
        kecepatan += v;
        cout<<"pertambahan kecepatan: "<<v<<endl;
        cout<<"Kecepatan sekarang: "<<kecepatan<<endl; 
    }
    void kurangi_kecepatan(int v){
        kecepatan -= v;
        cout<<"pengurangan kecepatan: "<<v<<endl;
        cout<<"Kecepatan sekarang: "<<kecepatan<<endl; 
    }
};

int main() {
    // Membuat objek `mobil1` dari class `Mobil`
    Mobil mobil1;
    mobil1.merk = "Toyota";
    mobil1.model = "Camry";
    mobil1.tahun = 2021;
    // Memanggil method `tampilkanInfo`
    mobil1.tampilkanInfo();
    mobil1.tambah_kecepatan(10);
    mobil1.tambah_kecepatan(30);
    mobil1.kurangi_kecepatan(20);
    return 0;
}