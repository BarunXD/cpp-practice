#include<iostream>
int main(){
    int a=10;
    int b=5;
    int c;
    c=a;
    a=b;
    b=c;
    std::cout<<"value of a "<<a<<'\n';
    std::cout<<"value of b is "<<b<<'\n';
    std::swap(a,b);
    std::cout<<"a is "<<a<<'\n';
    std::cout<<"b is "<<b;
}