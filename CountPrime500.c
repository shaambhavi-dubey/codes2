#include<stdio.h>
int main() {
    int count=0;
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
            count++;
        }
    }
    printf("number of prime numbers between 1 and 500 is %d",count);
}