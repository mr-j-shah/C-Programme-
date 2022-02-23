#include<stdio.h>

void main()
{
    int num,fac=1;
    printf("Enter Number : ");
    scanf("%d",&num);

    for (num; num>1; num--)
    {
        /* code */
        fac=fac*num;

        
    }
    printf("Factorial of Number is %d",fac);
    


}