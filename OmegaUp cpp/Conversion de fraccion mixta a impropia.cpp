#include <iostream>

using namespace std;

int main() {
    int entero, numerador, denominador;
    
    cout << "Ingrese la parte entera: ";
    cin >> entero;
    cout << "Ingrese el numerador: ";
    cin >> numerador;
    cout << "Ingrese el denominador: ";
    cin >> denominador;
    
    // Operación matemática de conversión
    int nuevo_numerador = (entero * denominador) + numerador;
    
    // Imprimir el resultado en formato de fracción
    cout << "\nFraccion impropia resultante: " << nuevo_numerador << "/" << denominador << endl;
    
    return 0;
}
