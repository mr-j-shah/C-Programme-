#include<stdio.h>

void main()
{
    int a,b,c=0;

    printf("Enter Number : ");
    scanf("%d",&a);
    step1:
    b=a%10;
    c=c*10+b;
    a=a/10;
    if (a==0)
    {
        printf("%d",c);
    }
    else
    {
        goto step1;
    }
    
    
    
}