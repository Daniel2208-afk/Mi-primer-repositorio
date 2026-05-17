/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x > 0 && y > 0 && z > 0){
        cout << "I";
    } 
    else if (x < 0 && y > 0 && z > 0){
        cout << "II";
    }
    else if (x < 0 && y < 0 && z > 0){
        cout << "III";
    }
    else if (x > 0 && y < 0 && z > 0){
        cout << "IV";
    }
    else if (x > 0 && y > 0 && z < 0){
        cout << "V";
    }
    else if (x < 0 && y > 0 && z < 0){
        cout << "VI";
    }
    else if (x < 0 && y < 0 && z < 0){
        cout << "VII";
    }
    else if (x > 0 && y < 0 && z < 0){
        cout << "VIII";
    }

    return 0;
}