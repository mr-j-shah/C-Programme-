#include<stdio.h>

void main(){

    int a;
    printf("Enter Term : ");
    scanf("%d",&a);

    int sum1=0,sum2=1;
    int sum;


    for (int i = 0; i < a; i++)
    {
        /* code */
        sum=sum1+sum2;
        printf("\t%d",sum);

        sum2=sum1;
        sum1=sum;

    }
    
}