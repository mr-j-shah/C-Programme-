#include<stdio.h>
#include<conio.h>

void main(){
    int amt,num;
    float rate,intr;
    printf("Enter principal amount : ");
    scanf("%d",&amt);

    printf("Enter the value of interest : ");
    scanf("%f",&rate);

    printf("Enter Number of Years : ");
    scanf("%d",&num);

    intr=amt*rate*num/100;

    printf("Simple Interest of %d id %.3f",amt,intr);

}