#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero de 4 cifras: ";
    cin >> numero;
    
    // Extraer cada posición matemática
    int unidades_millar = numero / 1000;          // Obtiene el primer dígito
    int centenas         = (numero % 1000) / 100;  // Obtiene el segundo dígito
    int decenas          = (numero % 100) / 10;    // Obtiene el tercer dígito
    int unidades         = numero % 10;            // Obtiene el último dígito
    
    // Mostrar los resultados en pantalla
    cout << "\nDescomposicion del numero:" << endl;
    cout << "Unidades de Millar: " << unidades_millar << endl;
    cout << "Centenas:           " << centenas << endl;
    cout << "Decenas:            " << decenas << endl;
    cout << "Unidades:           " << unidades << endl;
    
    return 0;
}
