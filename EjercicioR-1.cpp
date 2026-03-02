#include <iostream>
using namespace std;
void traspuesta(float M[][100], int n, int i = 0, int j = 0) {

    if (i >= n) return;            

    if (j >= n) {                  
        traspuesta(M, n, i + 1, i + 2);
        return;
    }

    if (j > i) {                   
        float temp = M[i][j];
        M[i][j] = M[j][i];
        M[j][i] = temp;
    }

    traspuesta(M, n, i, j + 1);     
}

int main() {
    float M[100][100] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    traspuesta(M, 3);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }
}