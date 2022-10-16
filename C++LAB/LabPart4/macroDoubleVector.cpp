#include <iostream>

using namespace std;


#define add(x,y)  ((x)+(y))

void addv(unsigned int n,int a[],int b[],int c[] ){

    for(unsigned i=0;i<n;i++)
    c[i]=add(a[i],b[i]);
}

void counterer(unsigned int n, int v[],int counting[2]){

int poscount=0; 
int negvount=0;

for(unsigned int i=0;i<n;i++){
    if(v[i]>0) poscount++;
    if(v[i]<0) negvount++;
}
counting[1]=poscount;
counting[2]=negvount;

}

int main() {

const unsigned int n=3;

int a[n]={-1,-2,3};
int b[n]={1,1,1};
int c[n];
int counting[2];
addv(n,a,b,c);

    for(unsigned i=0;i<n;i++)
cout<<c[i]<<" ";
cout<<'\n';

counterer(n,c,counting);

cout<<counting[1]<<" "<<counting[2]<<'\n';





    return 0;
}
