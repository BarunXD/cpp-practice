#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
    const double PI=3.1415; //const cannot be changed
    double radius=10;
    double circumference=2*PI*radius;
    std::cout<< circumference<<'\n';
    int x=0;   //namespaces used to define same name multiple times
    std::cout<< x<<'\n';
    std::cout<< first::x <<'\n';
}