#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int JT; // deklarasi jumlah teman
    cin >> JT; // Input jumlah teman

    string NamaTeman[JT]; // Deklarasi array untuk menyimpan nama-nama teman
    
    // Untuk input nama-nama teman
    for (int i = 0; i < JT; ++i) {
        cin >> NamaTeman[i];
    }

    // Membalikkan urutan array nama
    reverse(NamaTeman, NamaTeman + JT);

    // Menampilkan nama-nama dalam urutan yang terbalik
    for (int i = 0; i < JT; ++i) {
        cout << NamaTeman[i];
        if (i < JT - 1) {
            cout << " "; 
        }
    }
    cout << endl; 

    return 0;
}
