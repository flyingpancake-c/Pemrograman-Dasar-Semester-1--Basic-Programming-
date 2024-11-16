#include <iostream>
#include <vector>
#include <algorithm> // untuk fungsi sort
using namespace std;

// Fungsi untuk mencari nilai maksimum dalam array
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (vector<int>::size_type i = 0; i < arr.size(); ++i) { 
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
    vector<int> arr = {34, 7, 23, 32, 5, 62, 32, 45, 76, 89, 12, 34, 56, 78, 90, 21, 43, 65, 87, 9, 11, 13, 15, 17, 19};
    
    // Menampilkan array yang belum diurutkan
    cout << "Array yang belum diurutkan: ";
    for (vector<int>::size_type i = 0; i < arr.size(); ++i) {
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
    for (vector<int>::size_type i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
