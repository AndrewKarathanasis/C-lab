#include<iostream>
using namespace std;
#include "./vector1.hpp"

int main(){
cout<<"Enter dimension for vector:";
unsigned int size;
cin>>size;

float vec[5]={1.0f,2.0f,3.0f,4.0f,5.0f};

vector a(size);
//print(a);

vector b(a);

vector c(size);
for(unsigned int i=0;i<size;i++)
    c.array[i]=(i*i);

//vector d(c);
//print(d);

//d.set(vec,5);
print(c);
c.set_element(3,3.1415);
    return 0;
}
