#include<stdio.h>
int main() {
    printf("enter a number");
    int num,digit;
    scanf("%d",&num);
    digit = num %10;
    if ((num*num)%10== digit)
{
    printf("it is automorphic number");
}
}