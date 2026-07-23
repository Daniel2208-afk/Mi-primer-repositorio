#include <iostream>
using namespace std;
int p (int a, int n){
    int r=1;
    for (int i = 0; i<n;i++){
        r*=a;
    }
    return r;
}
int main (){
    int a, n; 
    cin>>a>>n;
    cout << p(a, n)<<"\n";
    return 0;
}