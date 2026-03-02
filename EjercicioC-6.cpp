#include <iostream>
using namespace std;

void ordenarParImpar(int A[], int izq, int der) {
    if (izq >= der)   
        return;
    if (A[izq] % 2 == 0) {
        ordenarParImpar(A, izq + 1, der);
    }
    else if (A[der] % 2 != 0) {
        ordenarParImpar(A, izq, der - 1);
    }
    else {
        int temp = A[izq];
        A[izq] = A[der];
        A[der] = temp;
        ordenarParImpar(A, izq + 1, der - 1);
    }
}

int main() {
    int A[] = {3, 8, 5, 2, 4, 7, 6};
    int n = 7;
    ordenarParImpar(A, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}