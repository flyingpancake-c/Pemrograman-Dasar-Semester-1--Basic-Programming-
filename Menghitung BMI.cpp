#include <iostream>
using namespace std;

int main() {
    float berat, tinggi;
    cout << "Masukkan beratmu : ";
    cin >> berat;
    cout << "Masukkan tinggimu : ";
    cin >> tinggi;
    float BMI = berat / (tinggi * tinggi);
    
    if (BMI < 18.5) {
        cout << "Kurus\n";
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "Normal\n";
    }
    else if (BMI >= 25 && BMI <= 29.9) {
        cout << "Berat Badan Berlebih";
    }
    else if (BMI > 30) {
        if (BMI > 30 && BMI <= 34.9) {
            cout << "Obesitas Kelas I";
        }
        else if (BMI >= 35 && BMI <= 39.9) {
            cout << "Obesitas Kelas II";
        }
        else {
            cout << "Obesitas Kelas III";
        }
    }
    
    
    return 0;
}