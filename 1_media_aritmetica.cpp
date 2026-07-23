#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;

    float datos[n];
    float suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Dato " << i + 1 << ": ";
        cin >> datos[i];
        suma = suma + datos[i];
    }

    float media = suma / n;

    cout << "La media aritmetica es: " << media << endl;

    return 0;
}
