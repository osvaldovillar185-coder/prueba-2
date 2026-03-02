#include <iostream>
using namespace std;

int suma(int matriz[][100], int n, int fila = 0, int col = 0) {
    if (fila == n)         
        return 0;

    if (col == n)           
        return suma(matriz, n, fila + 1, 0);

    return matriz[fila][col] + suma(matriz, n, fila, col + 1);
}

int main() {
    int matriz[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << suma(matriz, 3);
    return 0;
}