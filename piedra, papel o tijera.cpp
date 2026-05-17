/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    int piedra,papel,tijera;
    
    piedra > tijera and tijera < piedra;
    tijera > papel and papel < tijera;
    papel > piedra and piedra < papel;
    
    papel=1;
    tijera=2;
    piedra=3;
    
    if(cin>>piedra or papel or tijera){
    srand(time(0));
    int computadora;
    computadora = rand() % 3 + 1;

    cout << "La computadora eligió: "<<computadora<<"  ";
    if( piedra > tijera){
        cout<<"win";
        return 0;
    } else{
        cout<<"lose";
        return 0;
    }
     if( tijera > papel){
        cout<<"win";
        return 0;
    } else{
        cout<<"lose";
        return 0;
    }
     if(papel > piedra){
        cout<<"win";
        return 0;
    } else{
        cout<<"lose";
        return 0;
    }
    if(piedra == piedra or papel == papel or tijera == tijera){
        cout<<"empate";
        return 0;
    }
    }
    
    
     return 0;
}