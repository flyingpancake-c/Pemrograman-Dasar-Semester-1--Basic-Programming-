#include <iostream>
using namespace std;

// Function to calculate Fibonacci using recursion
int fibonacci(int n) {
    // Base case: return n if it is 0 or 1
    if (n <= 1) {
        return n;
    }
    // Recursive case: sum of the two preceding numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n_terms;
    cout << "Masukkan suku ke berapa: ";
    cin >> n_terms;  // Change this value to get more terms
    for (int i = 0; i < n_terms; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}