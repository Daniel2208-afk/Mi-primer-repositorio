#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n - 1 || j == n - 1 || i + j == n - 1) {
                cout << "x ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}

