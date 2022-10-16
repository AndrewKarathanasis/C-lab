#include<iostream>

int l_count(std::string wrd){
    
    std::string blank=" ";
    std::string mrg=wrd+blank;  
    int l=0;
    int i=0; 
    while(mrg[i]!=blank[0] && i<32) {
        if (mrg[i]!=blank[0]){
            l=l+1;} 
        i++;
    }
    return l;
}
void pali(std::string wrd="The void looks the same from everywhere"){

    for(int i=0;i<l_count(wrd);i++ ){
        if (wrd[i]!=wrd[l_count(wrd)-1-i]){
            std::cout<<"The word is not a palindrome\n";
            break;
        }else if(i==l_count(wrd)-1)  {std::cout<<"The word is a palindrome\n";}

    }

}




int main(){


  std::string word;
  std::cout<<"Please insert a word:\n";
  std::cin>>word;
  std::cout<<l_count(word)<<"\n";
  pali(word);
    return 0;
}
