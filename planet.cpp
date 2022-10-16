//Wight calculator

#include<iostream>

int main(){

    float weight;
    int planet;

    std::cout<<"Please enter yourt weight(kg):\n";
    std::cin>>weight;

    std::cout<<"Enter your destination planet:\n"
        <<"1) Mercury\n"
        <<"2) Venus\n"
        <<"3) Mars\n"
        <<"4) Jupiter\n"
        <<"5) Saturn\n"
        <<"6) Uranus\n"
        <<"7) Neptune\n";
    std::cin>>planet;
    
    switch(planet){

     case 1 :weight=weight*0.38;
     std::cout<<"On Mercury you weight:"<<weight<<" kg\n";
     break;

     case 2 :weight=weight*0.91;
     std::cout<<"On Venus you weight:"<<weight<<" kg\n";
     break;

     case 3 :weight=weight*0.38;
     std::cout<<"On Mars you weight:"<<weight<<" kg\n";
     break;

     case 4 :weight=weight*2.34;
     std::cout<<"On Jupiter you weight:"<<weight<<" kg\n";
     break;

     case 5:weight=weight*1.06;
     std::cout<<"On Saturn you weight:"<<weight<<" kg\n";
     break;

     case 6 :weight=weight*0.92;
     std::cout<<"On Uranus you weight:"<<weight<<" kg\n";
     break;

     case 7 :weight=weight*1.19;
     std::cout<<"On Neptune you weight:"<<weight<<" kg\n";
     break;

     
    default :std::cout<<"Not a valid destination\n";

    }

return 0;
}
