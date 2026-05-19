#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if (A < B) {
        cout << "True ";
    }
    if (A >= B) {
        cout << "False ";
    }
    
 
    if (B > C) {
        cout << "True ";
    }
    if (B <= C) {
        cout << "False ";
    }
    

    if (A == C) {
        cout << "True ";
    }
    if (A != C) {
        cout << "False ";
    }
    

    if (B != C) {
        cout << "True ";
    }
    if (B == C) {
        cout << "False ";
    }
    

    if (A <= C) {
        cout << "True";
    }
    if (A > C) {
        cout << "False";
    }

    cout << endl;
    
    return 0;
}

