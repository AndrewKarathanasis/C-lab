#include <iostream>

using namespace std;

int even(int a){

int odd(int a);

if (a%2==0){
return 1;
}
return odd(a);}


int odd(int a){
    return 0;
}


int main(){

int n=-1;

while (n<0){
cout<<"Enter a positive integer:";
cin>>n;
if (n<0){
    cout<<"WARNING!!! WARNING!!! \nNOT A POSITIVE INTEGER!!!\n";
        } 
}

for (int i=n;i>=0;i--){
cout<<even(i)<<'\n';
}

    return 0;
}
