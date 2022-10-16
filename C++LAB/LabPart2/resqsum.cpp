#include <iostream>

using namespace std;

long double sum( long int a){

long double s=0.0f;

for (long int i=1;i<=a;i++){

s=s+(1.0f/(i*i));
    }

return s;
}



int main(){

long int n=-1;
while (n<=0)
{
cout<<"Enter a positive integer:";
cin>>n;
if (n<=0){
    cout<<"WARNING!!! WARNING!!! \nNOT A POSITIVE INTEGER!!!\n";
        } 
}

cout<<n<<"  Sum of reverse sqares is: "<<sum(n)<<'\n';

    return 0;
}
