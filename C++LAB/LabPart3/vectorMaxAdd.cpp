#include <iostream>
using namespace std;

#define Max(x,y) ((x)>(y)?(x):(y))

void max(int a[],int b[],int M[],int n){

for(int i=0;i<n;i++){
    M[i]=Max(a[i],b[i]);
    }
}

void add(int a[],int b[],int S[],int n){

for (int i=0;i<n;i++)
    S[i]=a[i]+b[i];
}


int main(){

int a[]={9,3,0};
int b[]={3,8,1};
const unsigned int n=sizeof(a)/sizeof(a[0]);
int M[n];
int S[n];

max(a,b,M,n);
for (int i=0;i<n;i++)
    cout<<M[i]<<"  ";
cout<<'\n';

add(a,b,S,n);
for (int i=0;i<n;i++)
    cout<<S[i]<<"  ";
cout<<'\n';

return 0;
}
