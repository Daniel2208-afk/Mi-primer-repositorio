#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == 0 || j == i || j == 6 - i) {
                cout << "x ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
