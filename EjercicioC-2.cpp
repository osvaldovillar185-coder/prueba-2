#include <iostream>
using namespace std;

int producto(int m, int n) {
    if (n == 0)     // caso base
        return 0;

    return m + producto(m, n - 1);
}

int main() {
    int m = 4;
    int n = 3;
    cout << "Resultado: " << producto(m, n);
    return 0;
}