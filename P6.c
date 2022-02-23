#include<stdio.h>

void main(){

    int cel;
    float fer;

    printf("Enter the value of Temperature in celsius : ");
    scanf("%d",&cel);

    fer=(1.8*cel+32);

    printf("Value of temperature in fahrenheit is %.2f",fer);

}