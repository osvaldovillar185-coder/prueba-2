#include <iostream>
using namespace std;

void hanoi(int n, char origen, char auxiliar, char destino) {
    if (n == 1) {
        cout << "Mover disco de "
             << origen << " a "
             << destino << endl;
        return;
    }

    hanoi(n - 1, origen, destino, auxiliar);
    cout << "Mover disco de "
         << origen << " a "
         << destino << endl;
    hanoi(n - 1, auxiliar, origen, destino);
}

int main() {
    int n = 3;
    hanoi(n, 'a', 'b', 'c');
    return 0;
}