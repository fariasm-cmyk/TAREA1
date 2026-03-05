#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int a, b;

    cout << "Ingrese la cadena: ";
    getline(cin, texto);

    cout << "Ingrese el indice a: ";
    cin >> a;

    cout << "Ingrese el indice b: ";
    cin >> b;

    int n = texto.length();

    // Validar índices
    if (a < 0) a = 0;
    if (b >= n) b = n - 1;

    // Invertir la parte entre a y b
    while (a < b) {
        char temp = texto[a];
        texto[a] = texto[b];
        texto[b] = temp;
        a++;
        b--;
    }

    cout << "Resultado: " << texto << endl;

    return 0;
}