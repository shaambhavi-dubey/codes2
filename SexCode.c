#include<stdio.h>
int main() {
    int girls=0,boys=0;
    char g,b;
    printf("enter code for girl");
    scanf(" %c",&g);
    printf("enter code for boy");
    scanf(" %c", &b);
    for(int i=1; i<=10;i++){
        char check;
        printf("enter if boy or girl using your code ");
        scanf(" %c",&check);
        if(check==g)
        girls = ++girls;
        if (check==b)
        boys = ++boys;
        

    }
    printf("number of girls is: %d \n",girls);
    printf("number of boys is: %d\n",boys);
    
}