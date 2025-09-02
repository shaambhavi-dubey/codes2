#include<stdio.h>
int main() {
    char ch[100];
    printf("enter your name");
    scanf("%s",&ch);
    for (int i=0; i<5; i++){
        printf("%s\n", ch);
    }
} 