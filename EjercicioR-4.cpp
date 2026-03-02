#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void eliminarRandom(int arreglo[], int n) {
    while (n > 0) {
        int pos = rand() % n;   
        cout << "Se elimina: " << arreglo[pos] << endl;
        arreglo[pos] = arreglo[n - 1];
        n--; 
    }
}

int main() {
    srand(time(0));  
    int arreglo[] = {10, 20, 30, 40, 50};
    int n = 5;
    eliminarRandom(arreglo, n);
    return 0;
}