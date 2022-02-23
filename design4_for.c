#include<stdio.h>

void main(){
    char a='A';


    for (char i = 0; i <=5 ; i++)
    {
        /* code */
        for (int j = 5; j > i; j--)
        {
            /* code */
            printf("%c",a);
        }
        a++;
        printf("\n");
    }
    
}