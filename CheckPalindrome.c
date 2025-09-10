#include<stdio.h>
int main() {
    int num,digit,reverse=0,og;
    printf("enter a number");
    scanf("%d",&num);
    og = num;
    while(num!=0){
        digit=num%10;
        reverse = reverse*10 + digit;
        num = num/10;

    }
    if(reverse == og){
        printf("palindrome");
    }
    else {
        printf("not A palindrome");
    }
    
   
}