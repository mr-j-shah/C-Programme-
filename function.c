#include<stdio.h>

int ans(int x,int y);

void main()
{
    int a,b,power;
    printf("Enter Number : ");
    scanf("%d",&a);

    printf("Enter power : ");
    scanf("%d",&b);

    power=ans(a,b);

    printf("Ans = %d",power);
}
int ans(int x, int y){
    int i,mul=1;
    for ( i = 0; i < y ; i++)
    {
        mul*=x;
    }
    
    return mul;   
}