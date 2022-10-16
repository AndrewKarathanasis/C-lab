#include <iostream>
using namespace std;



int main(){

    int zero_count=0;
    int one_count=0;

char b[]="00 10 110i 010 01001001";

int l=sizeof(b)/sizeof(char);

for (int i=0;i<l;i++){
    if (b[i]=='1') one_count++;
    else if (b[i]=='0')  zero_count++;
    
}
cout<<zero_count<<" "<<one_count<<'\n';

    return 0;
}
