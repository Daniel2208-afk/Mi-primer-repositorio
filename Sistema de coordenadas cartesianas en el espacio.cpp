#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin>>x>>y>>z;
    
    if(x && y && z > 0){
        cout<<"I";
        return 0;
    }
    
    if(z && y > 0, x < 0){
        cout<<"II";
        return 0;
    }

    if(x && y < 0, z > 0){
        cout<<"III";
        return 0;
    }

    if(x && z > 0, y < 0){
        cout<<"IV";
        return 0;
    }
    
    if(x && y > 0, z < 0){
        cout<<"V";
        return 0;
    }
    
    if(x && z < 0, y > 0){
        cout<<"VI";
        return 0;
    }
    
    if(x && y && z < 0){
        cout<<"VII";
        return 0;
    }
    
    if(y && z < 0, x > 0){
        cout<<"VIII";
        return 0;
    }
    
    return 0;
}