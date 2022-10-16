#include <iostream>
using namespace std;


void double1(int &a)
{ a*=2; }

void double2(int *a)
{*a *=2;  }

int main(){
int x;
cin>>x;

cout<<x<<'\n';
double1(x);
cout<<x<<'\n';
double2(&x);
cout<<x<<'\n';
    return 0;
}

