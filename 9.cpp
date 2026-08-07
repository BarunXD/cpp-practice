#include<iostream>
#include<cmath>
int main(){
    double x=3;
    double y=5;
    double z=4.56;
    double a=3.1;
    double b=7.99;
    double min,max,power,root,mag;
    double roff,rupp,rdown;
    min=std::min(x,y);
    max=std::max(x,y);
    power=std::pow(x,y);
    root=std::sqrt(9);
    mag=std::abs(-2);
    roff=std::round(z);
    rupp=std::ceil(a);
    rdown=std::floor(b);
    std::cout<<min<<'\n';
    std::cout<<max<<'\n';
    std::cout<<power<<'\n';
    std::cout<<root<<'\n';
    std::cout<<mag<<'\n';
    std::cout<<roff<<'\n';
    std::cout<<rupp<<'\n';
    std::cout<<rdown<<'\n';
}