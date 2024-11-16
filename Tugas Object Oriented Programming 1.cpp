#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Mahasiswa {
private:
    string nama;
    string NIM;
    float IPK;

public:
    // Constructor
    Mahasiswa(string n, string nim, float ipk) : nama(n), NIM(nim), IPK(ipk) {}

    // Metode untuk menampilkan informasi mahasiswa
    void tampilkanInfo() const { // Menambahkan const di sini
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << NIM << endl;
        cout << "IPK: " << IPK << endl;
    }

    // Metode untuk menentukan apakah mahasiswa lulus
    bool lulus() const { // Menambahkan const di sini
        return IPK >= 2.75;
    }
};

int main() {
    vector<Mahasiswa> daftarMahasiswa;

    // Menambahkan beberapa objek Mahasiswa
    daftarMahasiswa.push_back(Mahasiswa("Alice", "123456", 3.0));
    daftarMahasiswa.push_back(Mahasiswa("Bob", "654321", 2.5));
    daftarMahasiswa.push_back(Mahasiswa("Charlie", "789012", 2.8));

    // Menampilkan informasi dan status kelulusan masing-masing mahasiswa
    for (const Mahasiswa& mahasiswa : daftarMahasiswa) { // Menggunakan referensi non-const
        mahasiswa.tampilkanInfo();
        if (mahasiswa.lulus()) {
            cout << "Status: Lulus" << endl;
        } else {
            cout << "Status: Tidak Lulus" << endl;
        }
        cout << "-----------------------" << endl;
    }

    return 0;
}