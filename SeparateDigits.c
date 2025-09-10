#include<stdio.h>
int main() {
    printf("enter a number");
    int num,digit=0;
    scanf("%d",&num);
    while (num!=0){
      
        digit = num % 10;
        num = num / 10;
        printf("%d\n",digit);

    }

}