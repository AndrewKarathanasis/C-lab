#include <iostream>
using namespace std;

#define concat(x,y) x##y

int main(){
    
    for (int i=1; i<=10; i++){
       int concat(a,i); 
       cout<<"Input variable a"<<i<<":'\n'";
       cin>>concat(a,i);    
    }

    for (int i=1;i<=10;i++) {
    
        cout<<concat(a,i)<<'\n';
    }
    
    return 0;}

