#include <iostream>
using namespace std;

void double1(unsigned const int n,int v[]){

    for(int i=0;i<n;i++)
        v[i]=2*v[i];
}

void double2(unsigned const int n,int *v){

    for(int i=0;i<n;i++)
        v[i]*=2;
    }

int main(){

    cout<<"Enter dimension for vector:";
   int I;
   cin>>I;
if (I<0)I=-I;

unsigned const int n=I;

int v[n];

for (int i=0;i<n;i++){

    cout<<"Enter vector element:"<<i<<'\n';
    cin>>v[i];
}

for (int i=0;i<n;i++)
cout<<v[i]<<" ";
cout<<'\n';

double1(n,v);

for (int i=0;i<n;i++)
cout<<v[i]<<" ";
cout<<'\n';

double2(n,v);

for (int i=0;i<n;i++)
cout<<v[i]<<" ";
cout<<'\n';

cout<<++I<<n;

    return 0;
}
