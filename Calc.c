#include<stdio.h>
int main() {
    float entry, a, b;
    float op;
    printf("choose your operation\n 1 is for addition \n 2 is for subtraction \n 3 is for multiplication \n 4 is for division");
    scanf("%f", &entry);
    printf("enter 2 numbers to perform operations on:");
    scanf("%f%f",&a,&b);
    if(entry==1)
    {op=a+b;
    printf("sum is %f\n",op);}
    else if (entry==2)
    {op=a-b;
    printf("difference is %f\n", op);}
    else if (entry==3)
    {op=a*b;
    printf("product is %f\n",op);}
    else if(entry==4)
    {op=a/b;
    printf("division is %f\n",op);}

}