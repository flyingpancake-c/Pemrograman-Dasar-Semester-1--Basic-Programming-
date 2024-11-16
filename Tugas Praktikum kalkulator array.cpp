#include <iostream>
using namespace std;

int addition(int a, int b) { // Fungsi menghitung penjumlahan
    return a + b;
}

int subtraction(int a, int b) { // Fungsi menghitung pengurangan
    return a - b;
}

int division(int a, int b) { // Fungsi menghitung pembagian
    return a/b;
}

int multiplication(int a, int b) { // Fungsi menghitung perkalian
    return a * b;
}

int main() {
    const int maxua = 100; // Untuk maksimum jumlah elemennya
    int ua;

    cout << "Masukkan jumlah elemen untuk array (maksimum " << maxua << "): "; // Untuk memasukkan jumlah elemen
    cin >> ua;

    int array1[maxua]; // array untuk menyimpan elemennya
    int array2[maxua];

    // Memasukkan input array pertama
    cout << "Masukkan " << ua << " elemen untuk arrray pertama: " << endl;
    for (int i = 0; i < ua; i++) {
        cout << "Elemen " << i + 1 <<   ": ";   
        cin >> array1[i];
    }

    // Memasukkan input array kedua
    cout << "Masukkan " << ua << " elemen untuk arrray kedua: " << endl;
    for (int i = 0; i < ua; i++) {
        cout << "Elemen " << i + 1 <<   ": ";
        cin >> array2[i];
    }

    cout << "========================" << endl;
    cout << "Hasilnya adalah: " << endl;
    cout << "========================" << endl;
    for (int i = 0; i < ua; i++) { // Loop untuk menghitung dan menampilkan hasil operasi dari setiap pasangan elemennya
        cout << "Elemen ke " << i + 1 << " dengan " << "angka ke 1 nya: " << "'" << array1[i] << "'" << " dan angka ke 2 nya: " << "'" << array2[i] << "'" << endl;
        cout << "Penjumlahan: " << addition(array1[i], array2[i]) << endl; 
        cout << "Pengurangan: " << subtraction(array1[i], array2[i]) << endl;
        cout << "Pembagian: " << division(array1[i], array2[i]) << endl;
        cout << "Perkalian: " << multiplication(array1[i], array2[i]) << endl;
        cout << "===================================================================" << endl;
    }
}

/* Afif Rafi Ardiyanto Nim: 245150307111026 */