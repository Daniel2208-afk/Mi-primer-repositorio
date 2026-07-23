#include <iostream>
using namespace std;

int fac(int n){
    int r = 1; 
    for (int i = 1; i <=n; i++){
        r*=i;
    }
    return r; 
}
int main (){
    int n; 
    cin>>n;
cout<< fac(n)<<"\n";
return 0;
}
