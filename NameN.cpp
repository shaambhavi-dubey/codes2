#include<iostream>
#include<string>
int main() {
    std::string name {};
    std::cout<<"enter your name";
    std::getline(std::cin>>std::ws, name);
    for(int i=0; i<=5; i++){
        std::cout<<name<< std::endl;    
    }
    return 0;
    
}