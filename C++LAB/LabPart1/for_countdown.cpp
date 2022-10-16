#include <iostream>

using namespace std;

int main(){

int n;

cout<<"Enter a positive integer:";
cin>>n;

for (int i=n;i>0;i--){

    //if (i==3) continue;
      if (i==3) break;
cout<<i<<'\n';


}
cout<<"FIRE!\n";
cout<<n<<'\n';


    return 0;
}
