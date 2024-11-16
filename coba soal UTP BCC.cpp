#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Membaca jumlah pernyataan
    int x = 1; // Inisialisasi nilai awal x

    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement; // Membaca setiap pernyataan

        if (statement == "++X" || statement == "X++") {
            ++x; // Meningkatkan nilai x
        } else if (statement == "--X" || statement == "X--") {
            --x; // Mengurangi nilai x
        }
    }

    cout << x << endl; // Mencetak nilai akhir x
    return 0;
}

