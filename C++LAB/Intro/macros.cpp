#include <iostream>

using namespace std;

#define equal(a,b,c) ((a==b)&&(b==c))?1:0
#define aver(a,b) (a+b)/2

int main(){

float a,b,c;

cout<<"Input a:\n";
    cin>>a;
cout<<"Input b:\n";
    cin>>b;
cout<<"Input c:\n";
    cin>>c;
cout<< equal(a,b,c);
cout<<'\n';

c=3*aver(a,b);

cout<<'\n'<<c<<'\n';

    return 0;
}
