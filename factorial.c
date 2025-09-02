#include<stdio.h>
int main() {
    long int f =1;
    printf("enter a number to factorial");
    int n;
    scanf("%d",&n);
    
    for (int i=1; i<=n;i++)
        f=f*i;
    printf("%ld",f);
    return 0;
}