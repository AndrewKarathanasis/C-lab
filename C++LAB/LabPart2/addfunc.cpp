#include <iostream>

using namespace std;


int add(int x,int y)
{
    int sum=(x+y);
    return sum;
}

int main(){

int x,y;

cout<<"Enter integer x:";
cin>>x;
cout<<"Enter integer y:";
cin>>y;

cout<<"x+y="<<add(x,y)<<'\n';

    return 0;
}
