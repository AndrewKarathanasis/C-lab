#include <iostream>

using namespace std;

int main(){

int n;
cout<<"Enter a positive integer:";
cin>>n;

for (int i=1;i<=n;i++){

    for (int j=1;j<=n;j++){
 
//if (i+j>(2*n)/3)
    //goto foo;
        cout<<i<<" "<<j<<" "<<i+j<<'\n';


    }


}

foo:;

    return 0;
}
