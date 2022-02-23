#include<stdio.h>

void main(){

    int term,b=1;
    float sum=0;
    printf("Enter Term Number : ");
    scanf("%d",&term);

    for (int i = 1; i <= term; i++)
    {
        /* code */
        int v_term=1;
        for (int j = i; j>0 ; j--)
        {
            /* code */
            v_term*=j;
        }
        printf("%d\n",v_term);
        float a=b/v_term;
        printf("%d\t",a);
        sum+=a;
        
    }
    printf("Sum = %f",sum);
    
}