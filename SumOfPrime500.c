#include<stdio.h>
int main() {
    int sum=0;
    int prime =1;
    for(int i=2;i<=500;i++){
        prime =1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime =0;
                break;
            }
        }
        if(prime==1){
            sum = sum + i;
        }
    }
    printf("sum is %d\n",sum);
}