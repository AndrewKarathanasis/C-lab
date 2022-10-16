#include <iostream>
#include <cmath>
using namespace std;

float sqsum(unsigned int n)
{
    
float sum=0;
float tum=0;

for (int i=1;i<=n;i++)
   {
sum=sum+sqrt(i);

tum=tum+sum;
   }
return tum;
}


int main(){


int n=-1;

while (n<0)
{
cout<<"Enter a positive integer:";
cin>>n;
if (n<0){
    cout<<"WARNING!!! WARNING!!! \nNOT A POSITIVE INTEGER!!!\n";
        } 
}


cout<<sqsum(n)<<'\n';

    return 0;
}
