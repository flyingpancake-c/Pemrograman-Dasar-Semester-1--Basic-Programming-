#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int L, R;
    cout << "Masukkan L: ";
    cin >> L;
    cout << "Masukkan R: ";
    cin >> R;

    int count = 0;
    for (int i = L; i <= R; i++) {
        if (i % 2 == 0 && i % 8 != 0) {
            count++;
        }
    }

    cout << "Jumlah kode sandi yang aman: " << count << endl;
    return 0;
}
