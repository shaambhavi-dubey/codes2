#include<stdio.h>
int main() {
    int num=0;
    int digits=0;
    printf("enter a number you want digits counted of");
    scanf("%d",&num);
    if(num==0)
    {digits = 1;}
    else 
    {while(num!=0)
    num=num/10;
    digits++;}

printf("number of digits are %d", digits);

    


}