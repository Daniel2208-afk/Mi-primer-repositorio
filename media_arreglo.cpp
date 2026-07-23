#include <iostream>
using namespace std;
int main()
{

	float suma=0,media;
	int arr[10];

	for(int i=0; i<10; i++) {
		cout<<"elemento "<<i+1<<" : ";
		cin>>arr[i];
		suma+=arr[i];
	}

	media=suma/10;
	cout<<"la media es: "<<media;

	return 0;
}