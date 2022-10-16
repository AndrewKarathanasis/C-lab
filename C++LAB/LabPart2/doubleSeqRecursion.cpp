#include <iostream>
using namespace std;




void seq(unsigned int n){

    float a[n];
    a[0]=1.0f;
    for (int i=1;i<n;i++){
        a[i]=a[0]+(1.0f/a[i-1]);        
    }
for (int i=0;i<n;i++){
    
    cout<<a[i]<<" ";
}
}












int main(){

cout<<"Input number of sequense elements:";
unsigned int n;
cin>>n;

seq(n);
//for (int i=0;i<n;i++){
    
    //cout<<a[i]<<" ";
//}



    return 0;
}

