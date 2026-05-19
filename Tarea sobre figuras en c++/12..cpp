#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= 2 && j >= 2 - i && j <= 2 + i) {
                cout << "x ";
            } else if (i > 2 && j >= i - 2 && j <= 6 - i) {
                cout << "x ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
