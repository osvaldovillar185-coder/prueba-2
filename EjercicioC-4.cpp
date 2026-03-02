#include <iostream>
using namespace std;

void subconjuntos(int A[], int n, int i, bool elegido[]) {

    if (i == n) {
        cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (elegido[j])
                cout << A[j] << " ";
        }
        cout << "}" << endl;
        return;
    }
    elegido[i] = false;
    subconjuntos(A, n, i + 1, elegido);
    elegido[i] = true;
    subconjuntos(A, n, i + 1, elegido);
}

int main() {
    int A[] = {1, 2, 3};
    int n = 3;
    bool elegido[3];
    subconjuntos(A, n, 0, elegido);
    return 0;
}