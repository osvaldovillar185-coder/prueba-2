#include <iostream>
using namespace std;

void minMax(int A[], int n, int &minimo, int &maximo) {

    if (n == 1) {        
        minimo = A[0];
        maximo = A[0];
        return;
    }

    int minRest, maxRest;
    minMax(A, n - 1, minRest, maxRest);
    if (A[n - 1] < minRest)
        minimo = A[n - 1];
    else
        minimo = minRest;

    if (A[n - 1] > maxRest)
        maximo = A[n - 1];
    else
        maximo = maxRest;
}

int main() {
    int A[] = {4, 7, 1, 9, 3};
    int n = 5;
    int minimo, maximo;
    minMax(A, n, minimo, maximo);
    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;
    return 0;
}