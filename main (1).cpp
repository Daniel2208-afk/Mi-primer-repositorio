# Programacion

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

using namespace std;
int main()
{
	int X,Y;
	cin>>X>>Y;
	
	if(X and Y >0){
	    cout<<"I";
	    return 0;
	} 
	if(X<0 and Y>0){
	    cout<<"II";
	    return 0;
	} 
	if(X and Y < 0){
	    cout<<"III";
	    return 0;
	} 
	if(X>0 and Y<0){
	    cout<<"IV";
	    return 0;
	}

	    return 0;
}