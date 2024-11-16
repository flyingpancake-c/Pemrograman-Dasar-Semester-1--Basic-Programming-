#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int awal, n, bilangan {0}, variable {0}, pangkat{1};
    cin >>awal>>n;
    for (int i=1; i<=n; i++)
    {
        for (int k = 1; k < 1; k++)
        {
            pangkat *= 2;
        }
        variable = awal * pangkat;
        bilangan += variable;
        pangkat = 1;
    }
    cout << bilangan;
    return 0;
}
