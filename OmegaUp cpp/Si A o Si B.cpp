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