#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   string nama;
    int kelahiran;
    int tahun;
    int umur;
    cout << "Masukkan nama orangnya : ";
    getline (cin, nama);
    cout << "Masukkan tahun kelahiran : ";
    cin >> kelahiran;
    cout << "Masukkan tahun saat ini : ";
    cin >> tahun;
    umur = tahun - kelahiran;
    cout << "Selamat ulang tahun ke- " << umur << " tahun , "<< nama << " !!!" << ". Semoga panjang umur dan sehat selalu :)" << endl;
    
    return 0;
}