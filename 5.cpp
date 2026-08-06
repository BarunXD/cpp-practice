#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
    using namespace second; //you can also use using namespace first
    std::cout<<x;
}