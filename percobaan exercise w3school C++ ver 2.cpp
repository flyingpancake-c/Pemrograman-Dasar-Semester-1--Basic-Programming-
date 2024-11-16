#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int a;
    double b, c;

    // percobaan cmath
    cout << "Masukkan sebuah angka untuk dicari akarnya: ";
    cin >> a;
    cout << "Akar dari " << a << " adalah: " << sqrt(a) << endl;
    cout << "Masukkan angka desimal yang ingin dibulatkan: ";
    cin >> b;
    cout << "Pembulatan dari " << b << " adalah: " << round(b) << endl;
    cout << "Masukkan angka yang akan digunakan untuk logaritma alami (dasar e ): ";
    cin >> c;
    cout << "Logaritma alami dari: " << c << " adalah: " << log(c) << endl;

}