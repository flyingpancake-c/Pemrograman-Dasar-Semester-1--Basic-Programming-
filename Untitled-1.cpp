#include <iostream>
using namespace std;

double faktorial_non_rekursi (int n){
    int i;
    double hasil  = 1;
    for (i = 1; i <= n; i++){
        hasil *= i;
    }
    return hasil;
}

double  faktorial_rekursi (int n){
    if (n == 0){
        return 1;
    } else {
        return n * faktorial_rekursi (n-1);
    }
}

int main(){
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

}