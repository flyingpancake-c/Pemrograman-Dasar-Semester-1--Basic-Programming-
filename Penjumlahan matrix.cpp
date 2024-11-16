#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {7, 8, 1, 0, 6};
    int c[5];

    for(int i = 0; i < 5; i++){
        c[i] = a[i] + b{i};
    }
    for(int i = 0; i < 5; i++){
        cout << "c["<<i<<"] = "<<c[i]<<endl;
    }
}