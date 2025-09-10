#include<stdio.h>
int main() {
    int prime =1;
    for(int i=3;i<=500;i++){
        prime =1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime =0;
                break;
            }
        }
        if(prime==1){
            printf("%d\n",i);
        }
    }
}