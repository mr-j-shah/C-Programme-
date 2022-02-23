#include<stdio.h>

void main(){

    for (int i = 1; i <= 5; i++)
    {
        /* code */
        int copy=0;

        for (int j = 1; j < i; j++)
        {
           /* code */
           printf(" ");
           copy++;
        }
        for (int k = 0; k <= 5-i; k++)
        {
           /* code */
           copy++;
           printf("%d",copy);
           
        }
           
           
            

        printf("\n");
    }
    

}