#include <iostream>
using namespace std;

unsigned int size;

float averange(unsigned int n,float v[]){

    float sum=0;

    for(int i=0;i<n;i++)
      sum+=v[i];

return (sum/n);
}


int main(){
    
 float a[]={1.2f,2.3f,4.2f,9.4f};
    
   size=sizeof(a)/sizeof(float);
    
   cout<<averange(size,a)<<'\n';

    
    return 0;
}
