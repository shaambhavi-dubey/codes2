#include<stdio.h>
int main(){
    printf("this program checks is a number is perfect or not\n");
    int num, sum=0;
    printf("enter a number");
    scanf("%d", &num);
    for(int i = 1; i< num; i++){
        if( num % i == 0){
            sum = sum + i;
        }

    }
    if( sum == num){
        printf("it is a perfect number");
    }
    else if (sum != num) {
        printf("not a perfecr number");
    }
}