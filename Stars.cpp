#include<iostream>
int main() {
    std::cout<<"enter number";
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            std::cout<<"*"<<" ";
         }
         std::cout<<"\n";
    }
}