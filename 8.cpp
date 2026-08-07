#include<iostream>
int main(){
    std::string name;
    int age;
    std::string college;
    std::cout<<"what is your name? "<<'\n';
    std::cin>>name; //cin cant use spaces it will only print first string before the space
    std::cout<<"Hello "<<name<<'\n';
    std::cout<<"what is your age?"<<'\n';
    std::cin>>age;
    std::cout<<"you are "<<age<<" years old"<<'\n';
    std::cout<<"your college name?"<<'\n';
    std::getline(std::cin >>std::ws, college);
    std::cout<<"you are in "<<college;
}