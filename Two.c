#include<stdio.h>
int main() {
    for(int i=1;i<=200;i++){
        int a;
        printf("enter a number");
        scanf("%d",&a);
        if(a<0)
        printf("%d is negative\n",a);
        else if(a>0)
        printf("%d is positive\n",a);
        else if (a==0)
        printf("%d is zero\n", a);

    }
}