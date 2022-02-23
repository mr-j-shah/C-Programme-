#include<stdio.h>

void main(){

    int a,b,c;
    printf("Enter Number : ");
    scanf("%d",&a);
    
    for (int i = 2; i < a; i++)
    {
        /* code */
        b=a%i;

        if (b==0)
        {
            /* code */
            c=1;
            break;
        }
        else
        {
            c=0;
        }
        
    }
    if (c==0)
    {
        /* code */
        printf("Your Number is Prime");
    }
    else
    {
        printf("Your Number is Not Prime");
    }

    
}