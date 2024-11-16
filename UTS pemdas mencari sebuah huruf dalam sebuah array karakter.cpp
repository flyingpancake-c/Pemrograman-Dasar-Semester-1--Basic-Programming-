#include <iostream>
using namespace std;

int cariHuruf(char arr[], int ukuran, char huruf) {
    for (int i = 0; i < ukuran; i++) { 
        if (arr[i] == huruf) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int ukuran;
    cout << "Masukkan ukuran array karakter: ";
    cin >> ukuran;

    char* arr = new char[ukuran]; 

    cout << "Masukkan kata-katanya untuk array: ";
    for (int i = 0; i < ukuran; i++) {
        cin >> arr[i];
    }

    char huruf;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    int hasil = cariHuruf(arr, ukuran, huruf);

    if (hasil != -1) {
        cout << "Huruf ditemukan pada indeks ke-" << hasil << endl;
    } else {
        cout << "Huruf tidak ditemukan" << endl;
    }

    return 0;
}
