#include <iostream>

using namespace std;


int sum1(int F[3]){

int sum=0;

for (int i=0;i<3;i++)
    sum+=F[i];
return sum;
}

int main(){

    int sumf;
    int V[3];
    for (int i=0;i<3;i++){

        cout<<"Enter an integer for vector element "<<i<<":"<<'\n';
        cin>>V[i];
    }

sumf=sum1(V);

cout<<sumf<<'\n';

    return 0;
}



