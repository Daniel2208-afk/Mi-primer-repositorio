/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int edad = (a<b) ? a : b;
    cout<<"El menor es: " <<edad;
    
    return 0;
}