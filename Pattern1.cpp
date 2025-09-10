#include<iostream>
// print square pattern of n.
int main() {
    std::cout<<"enter number";
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            std::cout<<i<<"\t";
        }
        std::cout<<"\n";
    }
}