#include<stdio.h>
#include<conio.h>

void main(){

    int a;
    printf("Enter Integer Number : ");
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        /* code */
        for (int j = 1; j <= a; j++)
        {
            /* code */
            printf("%d\t",j*i);

        }
        printf("\n");
    }
    
}