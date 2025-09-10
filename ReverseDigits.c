#include<stdio.h>
int main() {
    int num, digits, new[100];
    printf("enter a number : ");
    scanf("%d", & num);
    while (num != 0){
        digits = num %10;
        num = num/10;
        printf("%d",digits);


    }
}