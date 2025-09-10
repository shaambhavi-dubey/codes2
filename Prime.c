#include<stdio.h>
int main () {
    printf("enter a number");
    int num;
    int prime=1;
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime = 0;
            break;
        }
    }
    if( prime ==0){
        printf("number is not prime");
    }
    else if( prime == 1){
        printf("it is prime");
    }
}