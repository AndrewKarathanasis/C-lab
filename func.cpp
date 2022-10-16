#include <iostream>

int add(int x,int y)
{
    return x+y;
}
int mult(int x,int y)
{
    return x*y;
}

int inputnumber()
{   
    std::cout<<"Enter an integer for:"<<'\n';
    int n;
    std::cin>>n;
    return n;
}
int main()
{

int a=inputnumber();
int b=inputnumber();

    std::cout<<add(a,b)<<'\n'<<mult(a,b)<<'\n';


    return 0;
}

