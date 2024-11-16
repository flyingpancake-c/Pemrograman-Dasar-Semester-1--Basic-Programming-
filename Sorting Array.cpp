#include <iostream>
#include <vector>
#include <algorithm> // untuk fungsi sort
using namespace std;

// Fungsi untuk mencari nilai maksimum dalam array
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Fungsi untuk mengurutkan array dari kecil ke besar
void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> arr;
    int input;
    cout << "Masukkan angka (minimal ada 25 angka, masukkan -1 untuk berhenti. Kalau belum ada 25 angka programnya nggak mau berhenti ya! Coba aja kalau mau): ";
    
    // Membaca input dari pengguna
    while (true) {
        cin >> input;
        if (input == -1 && arr.size() >= 25) {
            break;
        } else if (input == -1) {
            cout << "Coba masukkan angka minimal harus ada 25 angka. ";
            continue;
        }
        cout << "Masukkan input ke-" << arr.size() + 1 << ": " << input << endl;
        arr.push_back(input); 
    }

    // Menampilkan array yang belum diurutkan
    cout << "Array yang belum diurutkan: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Mencari nilai maksimum
    int maxVal = findMax(arr);
    cout << "Nilai maksimum: " << maxVal << endl;

    // Mengurutkan array
    sortArray(arr);

    // Menampilkan array yang sudah diurutkan
    cout << "Array yang sudah diurutkan: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
