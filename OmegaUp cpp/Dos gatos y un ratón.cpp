#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int x, y, z;
    
    while (cin >> x >> y >> z) {
        // Calcular distancia Gato A de forma manual
        int dist_a = x - z;
        if (dist_a < 0) {
            dist_a = -dist_a;
        }
        
        // Calcular distancia Gato B de forma manual
        int dist_b = y - z;
        if (dist_b < 0) {
            dist_b = -dist_b;
        }
        
        // Comparar distancias para dar el resultado
        if (dist_a < dist_b) {
            cout << "gato A" << endl;
        }
        if (dist_b < dist_a) {
            cout << "gato B" << endl;
        }
        if (dist_a == dist_b) {
            cout << "raton C" << endl;
        }
    }
    
    return 0;
}
