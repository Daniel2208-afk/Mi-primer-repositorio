#include <iostream>
using namespace std;
int m ( int a, int n) {
    int r = 0;
    for ( int i = 0; i < n; i++){
        r += a;
    }
    return r;
}
int main(){
    int a, n;
    cin>>a>>n;
    cout<< m(a,n)<<"\n";    
    return 0;
}