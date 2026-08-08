#include<iostream>
#include<ctime>
int main(){
    int n; //the number upto you want to print random numbers
    std::cout<<"enter: ";
    std::cin >> n;
    srand(time(NULL));
    int num=(rand()%n)+1; //it will randomize the number
    std::cout<<num;
}