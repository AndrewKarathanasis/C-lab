#include <iostream>
using namespace std;


int main(){

char phone[11];

cout<<"Enter a phone number:";
cin.getline(phone,11);

if((phone[0]=='6')&&(phone[1]=='9')&&(phone[2]==('7')||phone[2]==('8'))) 
    cout<<phone<<": is cosmote number\n";
else cout<<phone<<": is not cosmote number\n"; 
    return 0;
}
