

#include<iostream>
//#include<cstring>
using namespace std;

class address{
    public:
char  street[20];
unsigned int number;
 char zip[10];
};



int main(){

address addr1;    

cout<<"Enter addres name:"<<'\n';
cin.getline(addr1.street,20,'\n');
cout<<"Enter addres number:\n";
cin>>addr1.number;
cin.ignore();
cout<<"Enter zip code:\n";
cin.getline(addr1.zip,10,'\n');



cout<<addr1.street<<" "<<addr1.number<<" "<<addr1.zip<<'\n';

    return 0;
}
