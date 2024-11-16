#include <iostream>
using namespace std;

int main() {
    // Deklarasikan input dan memasukkan nilai A dan B
    int A, B, X;

    // Meminta input 
    cout << "Masukkan angka yang lebih kecil daripada B (A): ";
    cin >> A;
    cout << "Masukkan angka yang lebih besar dari A (B): ";
    cin >> B;

    do {
        // Meminta input angka dari pengguna
        cout << "Masukkan angka antara " << A << " dan " << B << ": ";
        cin >> X;

        // Dibawah ini (dari if sampai else) itu untuk menentukan apakah nilai X itu ada di kisaran A dan B
        if (X >= A && X <= B) {
            cout << "Valid number" << endl;
        } else {
            cout << "Unvalid number" << endl;
        }
    } while (X < A || X > B); // Untuk mengulangi jika angka di luar kisaran

    return 0;
}
