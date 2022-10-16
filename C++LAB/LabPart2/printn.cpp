#include <iostream>

using namespace std;


void print(int n)
{
for (int i=1;i<=n;i++)
    {
    cout<<"I'm a function!  "<<i<<'\n';
    }
}





int main(){

int n;

cout<<"Enter a positive integer:";
cin>>n;
print(n);


    return 0;
}
