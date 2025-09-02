#include<stdio.h>
int main() {
    int n, sum=0;
    printf("enter number you want sum of odd numbers upto");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        if(i%2!=0)
        sum = sum + i;
    }
    printf("sum is %d", sum);

}