#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == n - 1 || j == 3 - i || j == 3 + i) {
                cout << "x ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
