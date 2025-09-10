#include<iostream>
#include<random>
int main(){
    std::cout<<"Guess the random number between 1 to 10!!\n";
    std::random_device rd; 
    std::mt19937 Random(rd());
    std::uniform_int_distribution<> Ten{1,10};
    int number = Ten(Random);
    int guess;
    bool check=false; 
    for(int i=1; i<=3; i++){
        std::cout<<"guess the number\t";
        std::cin>>guess;
        if(guess==number)
        {if(i==1)
            {std::cout<<"you have guessed correct     ☆ ☆ ☆";}
            else if(i==2)
            {std::cout<<"you have guessed correct   ☆ ☆";}
            else if(i==3)
            {std::cout<<"you have guessed correct   ☆";}
        check = true;
        break;} 
        else
            if(i<3)
             {std::cout<<"oops! try again\n";}
        }
        if(check == false)
        {std::cout<<"you have lost ;(. The number was\t"<<number;}
    return 0;
}