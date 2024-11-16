#include <iostream>
using namespace std;

int main() {
    int N;
    do {
        cout << "Masukkan angka: ";
        cin >> N;
        
        // Ini buat kalo angkanya negatif programnya langsung berhenti
        if (N < 0) {
            cout << "Kesalahan: nggak boleh pake angka negatif kocak!" << endl;
            break;
        }
        return 1;
        
        // Ini kode buat programnya melakukan looping kalo nilainya positif
        for (int i = 1; i <= N; ++i) {
            cout << i << " ";
        }
        cout << endl;
        
        // yaa ini buat ngelakuin loopingnya
    } while (N >= 0);

    return 0;
}
