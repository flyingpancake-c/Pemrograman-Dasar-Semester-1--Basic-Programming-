#include <iostream>
using namespace std;

int main() {
    // int a = 10;
    // int *Pointer_A = &a;
    // int **Pointer_Pointer_A = &Pointer_A;

    // cout << "Nilai a: " << a << endl;
    // cout << "Alamat a: " << &a << endl;
    // cout << endl;

    // cout << "Nilai Pointer_A (alamat a): " << Pointer_A << endl;
    // cout << "Alamat Pointer_A: " << &Pointer_A << endl;
    // cout << endl;

    // cout << "Nilai Pointer_Pointer_A (alamat Pointer_A): " << Pointer_Pointer_A << endl;
    // cout << "Alamat Pointer_Pointer_A: " << &Pointer_Pointer_A << endl;
    // cout << endl;

    // return 0;


    int variabel_1 = 30, variabel_2 = 10;
    int *panjang_pointer = &variabel_1;
    int *lebar_pointer = &variabel_2;

    int luas_persegi = (*panjang_pointer) * (*lebar_pointer);
    cout << "Nilai pointer 1: " << *panjang_pointer << endl;
    cout << "Alamat pointer 1: " << panjang_pointer << endl;
    cout << "Nilai pointer 2: " << *lebar_pointer << endl;
    cout << "Alamat pointer 2: " << lebar_pointer << endl;
    cout << "Hasil dari variabel luas persegi: " << luas_persegi << endl;
    cout << "Variabel luas persegi disimpan pada alamat: " << &luas_persegi;
}