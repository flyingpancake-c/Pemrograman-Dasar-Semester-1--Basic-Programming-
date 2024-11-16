#include <iostream>
using namespace std;

int main() {
    int A = 3;
    int B = 4;
    int nilai [A][B];
    int jumlah = 0;

    for (int i = 0; i < A; i++){
        for (int j = 0; j < B; j++){
            if (i == j) {
                jumlah += i;
            }
        }
    }

    cout << "Nilai jumlah yang didapatkan adalah: " << jumlah ;
}