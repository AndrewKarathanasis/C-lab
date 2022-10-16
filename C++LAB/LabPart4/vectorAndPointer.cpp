#include <iostream>

using namespace std;

int main(){
int n=5;
int a[n];
int *p;

cout<<&a<<" "<<a<<" "<<p<<'\n';

for(p=a;p<a+n;p++) *p=1;

cout<<"p= "<<p<<' '<<p-a<<'\n';

for(unsigned int i=0;i<5;i++)
cout<<a[i]<<" ";
cout<<"\n\n\n";

for(p=a;p<a+n;p++){
    (*p)++;
    cout<<*p<<' ';
}
cout<<'\n';




//int b=3;
//p=&b;
//cout<<&b<<" "<<b<<'\n';
//cout<<p<<" "<<*p<<" "<<&p<<'\n';
//cout<<p+1;
//cout<<p+2;




    return 0;
}
