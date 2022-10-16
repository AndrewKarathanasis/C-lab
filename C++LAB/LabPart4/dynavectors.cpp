#include <iostream>
using namespace std;


int main(){

cout<<"Enter dimension of vectors:";
int d;
cin>>d;
if(d<0) d=-d;
const unsigned int n=d;

int *ptra = new int[n];
int *ptrb = new int[n];


cout<<"Enter elements for vector a:\n";
for(int i=0;i<n;i++){
    cin>>*(ptra+i);
    }
cout<<"Enter elements for vector b:\n";
for(int i=0;i<n;i++){
    cin>>*(ptrb+i);
    }

cout<<"\n\n";

for(int i=0;i<n;i++)
cout<<*(ptra+i)<<" ";

cout<<'\n';

for(int i=0;i<n;i++)
cout<<*(ptrb+i)<<" ";

cout<<"\n\n";

int iprod=0;

for(int i=0;i<n;i++){
    iprod+=((*(ptra+i))*(*(ptrb+i)));
     }

cout<<"The inner product of a and b is :"<<iprod<<'\n';

delete [] ptra;
delete [] ptrb;
cout<<*ptra<<" "<<*ptrb;
    return 0;
}
