#include<stdio.h>
int main() {
    int r1,r2,sum=0;
    float mean;
    printf("enter the range you want mean of");
    scanf("%d%d", &r1, &r2);
    for(int i=r1; i<=r2;i++){
        sum = sum+i;
    }
    mean = sum/10;
    printf("mean is %f", mean);
}