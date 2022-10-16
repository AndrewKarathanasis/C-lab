#include <iostream>

using namespace std;


int main(){

    int i=5;

    int *ptr1,*ptr2;

    ptr1=&i;
    ptr2=ptr1;

    cout<<*ptr1<<" "<<ptr1<<'\n';
    cout<<*ptr2<<" "<<ptr2<<'\n';
    cout<<&i<<'\n';





    return 0;
}
