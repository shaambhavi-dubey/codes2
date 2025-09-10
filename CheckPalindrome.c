#include<stdio.h>
int main() {
    int num,digit,reverse=0,original;
    printf("enter a number");
    scanf("%d",&num);
    original = num;
    while(num!=0){
        digit=num%10;
        reverse = reverse*10 + digit;
        num = num/10;

    }
    if(reverse == original){
        printf("palindrome");
    }
    else {
        printf("not A palindrome");
    }
    
   
}