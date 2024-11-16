#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mencetak nama elemen alam
void cetakNama(const string& nama, int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << nama << endl;
    }
}

int main() {
    string nama;
    int jumlah;

    // Membaca input nama elemen alam
    getline(cin, nama);
    
    // Membaca input jumlah
    cin >> jumlah;

    // Memanggil fungsi cetakNama
    cetakNama(nama, jumlah);

    return 0;
}