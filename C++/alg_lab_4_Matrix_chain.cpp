#include <iostream>
using namespace std;

int matrixChainOrder(int p[], int n) {
    int m[n][n];                                       // We initializes a two-dimensional integer array

    for (int i = 1; i < n; i++) {
        m[i][i] = 0;                                   // We sets the diagonal elements of m to 0.
    }

    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;                          // We calculates the ending index j.
            m[i][j] = INT_MAX;                          // We initializes the value of m[i][j] to the maximum possible integer value.
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]; // calculates the cost q of multiplying the matrices from index i to j with partition index k.
                if (q < m[i][j]) {                       // if the cost q is less than the current value of m[i][j], update m[i][j] to q.
                    m[i][j] = q;
                }
            }
        }
    }

    return m[1][n - 1];                                  // We returns the cost of multiplying the matrices
}

int main() {
    int arr[] = {5, 6, 7, 8};                           // We are taking the input
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The Minimum number of multiplications is : " << matrixChainOrder(arr, size) << endl;
    return 0;
}
