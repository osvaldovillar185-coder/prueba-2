#include <iostream>
using namespace std;

int encontrarRepetido(int A[], int n) {
    int sumaReal = 0;
    for (int i = 0; i < n; i++)
        sumaReal += A[i];

    int sumaEsperada = (n - 1) * n / 2;
    return sumaReal - sumaEsperada;
}

int main() {
    int A[] = {1, 3, 4, 2, 2};
    int n = 5;
    cout << "El numero repetido es: "
         << encontrarRepetido(A, n);

    return 0;
}