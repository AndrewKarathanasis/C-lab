#include <iostream>
#include <cstring>
using namespace std;
//
//
//
//
//
//
//
//

int main(){

char word1[6]="mine";
char word2[7]="those";
char word3[13];

strcpy(word3,word1);
cout<<word3<<" "<<strlen(word3)<<"\n\n";

strcat(word3,word2);
cout<<word3<<" "<<strlen(word3)<<"\n\n";
  cout << word3[11] << word3[12] << word3[13] << word3[14] << '\n';
strcat(word3,word2);
cout<<word3<<" "<<strlen(word3)<<"\n\n";
  cout << word3[11] << word3[12] << word3[13] << word3[14]<<word3[16] << '\n';
    return 0;
}
