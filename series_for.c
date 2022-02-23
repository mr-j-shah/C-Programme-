#include<stdio.h>

void main(){
    
    int n,i,j;
    float mul=1,sum=0,sum1;
    printf("Enter N term : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        mul=1;
        for ( j = i; j > 0; j--)
        {
            mul*=j;   
        }
        sum1=1/mul;
        sum+=sum1;
    }
    printf("%.4f",sum);
}