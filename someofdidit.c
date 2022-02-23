#include<stdio.h>

void main(){

    int a,b,c=0;
    printf("Enter Number : ");
    scanf("%d",&a);

    while (a!=0)
    {
        /* code */
        b=a%10;
        c=c+b;
        a=a/10;

    }
    printf("Sum of Didit is %d",c);
}