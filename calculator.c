#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    char c;

    printf("Enter Number 1 :");
    scanf("%d",&a);

    printf("Which opreaction you want to do (+,-,*,/) : ");
    getchar();
    scanf("%c",&c);
    
    printf("Enter Number 2 :");
    scanf("%d",&b);

    switch (c)
    {
        case '+':
        /* code */
            printf("Addicion of Twe Number is %d",a+b);
            break;
        case '-':
        /* code */
            printf("Sub of Twe Number is %d",a-b);
            break;
        case '*':
        /* code */
            printf("Mul of Twe Number is %d",a*b);
            break;
        case '/':
        /* code */
            printf(" of Twe Number is %d",a/b);
            break;
    
        default:
            printf("Enter Vaalid Input");
            break;
    }
}