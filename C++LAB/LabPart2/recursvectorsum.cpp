#include <iostream>

using namespace std;


int sum1(int V[],unsigned int i){

    if (i==0)
    return V[0];
    else 
        return (V[i]+sum1(V,i-1));
}

int sum2(const unsigned n,int V[],unsigned i){

    if(i==n-1)
      return V[i];
    else 
      return V[i]+sum2(n,V,i+1);

}

int main(){

//Input Vector
    int n;
   
    cout<<"Input dimension for vector:";
    cin>>n;
    if (n<0) n=-n;
    int V[n];

    for (unsigned int i=0;i<n;i++){

        cout<<"Enter an integer for vector element "<<i<<":"<<'\n';
        cin>>V[i];
    }
//Print vector
    cout<<'\n'<<"V=[\n";
    for (unsigned int i=0;i<n;i++){
        cout<<"   "<<V[i]<<"\n";
    }cout<<"  ]\n";
      

    cout<<sum1(V,n-1)<<'\n';
    cout<<sum2(n,V,0)<<'\n';
    
    





    return 0;
}
