#include<iostream>
#include<vector>
// typedef std::vector<std::pair<std::string,int>> pairlist_t;
//typedef std::string text_t;//instead of using typedef use using keyword
//typedef int num_t;
using text_t=std::string;
using  num_t=int;
int main(){
    //pairlist_t pairlist for vector one
     text_t first_name="Barun";//text_t is defined as std::string
     num_t age=21;
     std::cout<<first_name<<'\n';  
    std::cout<<"age is "<<age<<" years old" <<'\n';
}