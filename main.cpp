/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    int a,b,S,S1,R,R1,R2,t;
    cin>>a>>b;
    t=a+b;

    /*¿a+b es igual a 5?*/
    
    if(t=5){
        S=3+b;
        S1=2*a+S;
        cout<<S1;
        return 0;
    } else{
            R=a-1;
            /*¿7a+b es par?*/ 
            if((7*R+b)%2==0){
                /*suma par*/
            R1=R-b; 
            cout<<R1;
            return 0;
            }  else{
                R2=R*b; 
            cout<<R2;
            return 0; 
            }
        }
    return 0;
}