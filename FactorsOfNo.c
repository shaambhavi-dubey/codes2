#include<stdio.h>
int main() {
    printf("this program shows factors of entered number\n");
    int num;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        if( num % i == 0){
            printf("%d\t", i);
        }
    }
}