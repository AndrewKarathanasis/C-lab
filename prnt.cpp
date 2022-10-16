# include <iostream>
using namespace std;



    void print(int x){
        cout<<"positive"<<x<<"\n";}

    void print2(int x){
        cout<<"negative"<<x<<"\n";}


int main(){
int x;
cin>>x;

if (x>0)
     print(x);
else print2(x);



return 0;
}
