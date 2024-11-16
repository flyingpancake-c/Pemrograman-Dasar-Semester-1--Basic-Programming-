#include <iostream>
using namespace std;

int main() {
    int angka;
    long long faktorial = 1;

    // Meminta pengguna memasukkan angka positif
    cout << "Masukkan angka positif: ";
    cin >> angka;

    // Memastikan angka yang dimasukkan positif
    if (angka < 0) {
        cout << "Angka harus positif." << endl;
    } else {
        // Menghitung faktorial menggunakan while loop
        while (angka > 0) {
            faktorial *= angka;
            angka--;
        }

        // Menampilkan hasil faktorial
        cout << "Faktorialnya adalah: " << faktorial << endl;
    }

    return 0;
}
