#include<iostream>
#include<string.h>
int main(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
    //std::getline(std::cin>>std::ws, name);
    /*if(name.length()> 12){
        std::cout<< "no name is longer than 12 char\n";
    }else{
        std::cout<<"welcome";
    }*/
    /*if(name.empty()){
        std::cout<<"You didn't enter any thing";
    }else{
        std::cout<<"Hello "<<name;
    }*/
   /*name.clear();
   std::cout<<"Hello "<<name;*/
   /*name.append("@gmail.com");
   std::cout<<"your username is "<<name;*/
   /*std::cout<<name.at(0); 
   std::cout<<name.at(1);*/
    /*name.insert(0,"@");
    std::cout<<name<<'\n';
    std::cout<<name.find(' ');*/
    name.erase(0,6);
    std::cout<<name;

}