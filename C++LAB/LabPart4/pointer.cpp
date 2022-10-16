#include <iostream>

using namespace std;


int main(){

    int i,j;
    i=5,j=10;

int *ptr;

ptr=&i;
    cout<<i<<" "<<&i<<'\n'<<j<<" "<<&j<<"\n\n";
    cout<<*ptr<<" "<<ptr<<'\n';
    ptr=&j;
    cout<<*ptr<<" "<<ptr<<'\n';

    return 0;
}
