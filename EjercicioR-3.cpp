#include <iostream>
using namespace std;

int maximo(int A[], int n) {
    if (n == 1)            
        return A[0];

    int maxRestante = maximo(A, n-1);
    if (A[n-1] > maxRestante)
        return A[n - 1];
    else
        return maxRestante;
}

int main() {
    int A[] = {3, 7, 2, 9, 5};
    int n = 5;
    cout << "El maximo es: " << maximo(A, n);
    return 0;
}
