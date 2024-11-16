#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float alas, tinggi, luas; // Deklarasi alas, tinggi, dan luasnya 

    // Input nilai alas dan tinggi
    cout << "Masukkan panjang alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    // Deklarasi pointer yang menunjuk ke variabel alas dan tinggi
    float *ptrAlas = &alas;
    float *ptrTinggi = &tinggi;

    // Menghitung luas segitiga menggunakan pointer
    luas = 0.5 * (*ptrAlas) * (*ptrTinggi);

    // Output hasil luas segitiga
    cout << "Luas segitiga: " << luas << endl;

    return 0;
}
