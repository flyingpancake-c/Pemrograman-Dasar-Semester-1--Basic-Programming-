#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct Mahasiswa {
    string nama;
    string NIM;
    string jenisKelamin;
    float IPK;
};

int main() {
    int JM; 
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> JM;
    vector<Mahasiswa> datamahasiswa(JM);

   
    for (int i = 0; i < JM; i++) {
        cout << "Masukkan data mahasiswa ke-" << (i + 1) << ": " << endl;
        cout << "Nama: ";
        cin >> datamahasiswa[i].nama; 
        cout << "NIM: ";
        cin >> datamahasiswa[i].NIM;
        cout << "Jenis Kelamin: ";
        cin >> datamahasiswa[i].jenisKelamin;
        cout << "IPK (Skala 4): ";
        cin >> datamahasiswa[i].IPK;
        cout << endl;
    }


    sort(datamahasiswa.begin(), datamahasiswa.end(), [](const Mahasiswa &a, const Mahasiswa &b) {
        return a.IPK > b.IPK; 
    });

    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "3 Mahasiswa dengan IPK tertinggi adalah: " << endl;
    cout << "=========================================" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Peringkat ke " << (i + 1) << ": " << endl;
        cout << "Nama: " << datamahasiswa[i].nama << endl;
        cout << "NIM: " << datamahasiswa[i].NIM << endl;
        cout << "Jenis Kelamin: " << datamahasiswa[i].jenisKelamin << endl;
        cout << "IPK: " << datamahasiswa[i].IPK << endl;
        cout << endl;
    }
    cout << "==========================================" << endl;

    return 0;
}