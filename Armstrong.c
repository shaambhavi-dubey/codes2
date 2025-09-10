#include<stdio.h>
int main(){
    printf("this program checks whether entered number is armstrong number\n");
    int num,digits,sumCube=0,original;
    printf("enter a number");
    scanf("%d",&num);
    original = num;
    
    while(num!=0){
        digits=num%10;
        sumCube= sumCube+(digits*digits*digits);
        num = num/10;
    }
    if ( sumCube == original){
        printf("Given no. is an armstrong number");
    }
    else if( sumCube != original){
        printf("the given no. is not an armstrong number");
    }
}