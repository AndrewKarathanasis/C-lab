
#include<iostream>
using namespace std;
#include "vector2.hpp"


int main(){

int r[size];
for (unsigned int i=0;i<size;i++)
    r[i]=i+1;

vector a;
print(a);

vector b(r);
print(b);

vector c(b);
print(c);

b=b+c;
print(b);
int pr=b*c;
cout<<pr<<'\n';

cout<<(b==c);
cout<<(b==b);
cout<<"\n\n\n";

a=b;
print(a);


//c.~vector();
    return 0;
}
