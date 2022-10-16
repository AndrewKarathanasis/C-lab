#include <iostream>

using namespace std;

int main(){

int n;

cout<<"enter an integer:\n";
cin>>n;

switch (n){
    case 1 :
        cout<<"n=1\n";
        break;
    case 2 :
        cout<<"n=2\n";
        break;
    default:
        cout<<n<<'\n';
    }



    return 0;
}
