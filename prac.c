#include<stdio.h>
#include<conio.h>

void main(){

    int a;
    printf("Enter number : ");
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        /* code */
        printf("Cube of %d is %d\n",i,i*i*i);
    }
    
}