#include <iostream>
using namespace std;


int main() {
   string kata, kata2;
    cout << "Masukkan kata pertama : ";
    getline (cin, kata);
    cout << "Masukkan kata kedua : ";
    getline (cin, kata2);
    cout << kata << ", " << kata2 << endl;
    return 0;
}
