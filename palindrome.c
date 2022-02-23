#include<stdio.h>

void main(){

    int a,b,c=0,d=1;
    printf("Enter Number :");
    scanf("%d",&a);
    d=a;

    while (d!=0)
    {
        /* code */
        
        b=d%10;
        c=c*10+b;
        d=d/10;

    }
    printf("%d",c);
    if (c==a)
    {
        /* code */
        printf("Your Number is Palindrome");
    }
    else
    {
        printf("Your Number is Not Palindrome");
    }
    
    
}