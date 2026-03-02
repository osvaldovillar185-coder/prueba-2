#include <iostream>
using namespace std;

bool esPalindromo(string s, int izq, int der) {
    if (izq >= der)   
        return true;

    if (s[izq] != s[der])
        return false;

    return esPalindromo(s, izq + 1, der - 1);
}

int main() {
    string s = "racecar";
    if (esPalindromo(s, 0, s.length() - 1))
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}