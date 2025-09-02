#include<stdio.h>
int main() {
    int num, l,s;
    printf("enter a number");
    scanf("%d",&num);
    num=l=s;
    for(int i=1;i<=10;i++){
        printf("enter a number:");
        scanf("%d",&num);

        if (num>l)
        l=num;
        if(num<s)
        s=num;
    }
    

    printf("Greatest number = %d\n", l);
    printf("Smallest number = %d\n", s);
return 0;
}

