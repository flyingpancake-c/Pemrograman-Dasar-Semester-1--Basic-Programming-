#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa {
public:
    string nama;
    string NIM;
    float IPK;

    // Menampilkan informasi mahasiswa
    void tampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << NIM << endl;
        cout << "IPK: " << IPK << endl;
    }

    // Menentukan apakah mahasiswa lulus berdasarkan nilainya
    bool lulus() {
        return IPK >= 2.75;
    }
};

int main() {
    int jumlahMahasiswa; // Untuk menyimpan jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswanya: ";
    cin >> jumlahMahasiswa;

    vector<Mahasiswa> daftarMahasiswa(jumlahMahasiswa); 

    // Mengisi data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Mahasiswa ke- " << (i + 1) << ": " << endl;
        cout << "Masukkan Nama: "; 
        cin.ignore();
        getline(cin, daftarMahasiswa[i].nama);
        cout << "Masukkan NIM: ";
        getline(cin, daftarMahasiswa[i].NIM);
        cout << "Masukkan IPK: ";
        cin >> daftarMahasiswa[i].IPK;
    }

    // Menampilkan informasi2 dari semua mahasiswa beserta lulus dan tidak lulusnya
    cout << "-----------------------" << endl;
    cout << "Daftar Mahasiswa: " << endl;
    cout << "-----------------------" << endl;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        daftarMahasiswa[i].tampilkanInfo();
        cout << "Status: " << (daftarMahasiswa[i].lulus() ? "Lulus" : "Tidak Lulus") << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}