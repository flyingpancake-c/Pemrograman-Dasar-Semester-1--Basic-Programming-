#include <iostream>
using namespace std;


int main() {
// Ini kode buat bikin setengah segitiga yang biasa

//     for (size_t i = 0; i < 4; i++) {
//         for (size_t j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl; 
//     }
//     return 0;
// }

// Ini buat bikin setengah segitiga yang terbalik
for (size_t i = 10; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl; 
    }
    return 0;
}

