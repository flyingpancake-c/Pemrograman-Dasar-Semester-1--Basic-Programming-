#include <iostream>
#include <cmath>
using namespace std;

int penjumlahan (int n){
    if (n==1){
        return 1;
    }
    else {
        return (n + penjumlahan (n - 1));
    }
};

int main(){
    int n;
    cin >> n;
    penjumlahan()
}