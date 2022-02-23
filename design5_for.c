#include<stdio.h>

void main(){

    for (int i = 1; i <= 5; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            if (i%2!=0)
            {
                /* code */
                if (j%2==0)
                {
                    /* code */
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            else
            {
                if (j%2==0)
                {
                    /* code */
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            
            
            
            
        }
        printf("\n");
    }
    

}