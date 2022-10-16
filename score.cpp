#include <iostream>


int main(){
    
float a;
float b;
float c;

std::cout<<"Enter score of first exam"<<'\n';
std::cin>>a;

std::cout<<"Enter score of second exam"<<'\n';
std::cin>>b;

std::cout<<"Enter score of third exam"<<'\n';
std::cin>>c;

float final_score=(0.2*a+0.2*b+0.6*c);
std::cout<<"Your final score is:"<<final_score<<'\n';


return 0;}
