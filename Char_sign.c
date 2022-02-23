#include<stdio.h>

void main()
{
    char c;
    int a;
    printf("Enter ");
    scanf("%c",&c);
    a=(int)c;
    


    if(a>=65&&a<=90)
    {
        printf("Enter Charecter is Capital ");

    }
    else if (a>=97&&a<=122)
    {
        /* code */
        printf("Enter charecter is small");

    }
    else if (a>=33&&a<=47)
    {
        /* code */
        printf("Enter charecter is special charecter ");
    }
    else if (a>=48&&a<=57)
    {
        /* code */
        printf("Enter charecter is number");
    }
    

}