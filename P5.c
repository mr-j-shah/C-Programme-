#include<stdio.h>

void main(){

    int km,feet,cm,mtr,inch;

    printf("Enter the value of Distance in K.M. : ");
    scanf("%d",&km);

    mtr=km*1000;
    printf("Distance in Meter is %d\n",mtr);

    cm=km*100000;
    printf("Distance in Centimeter is %d\n",cm);

    inch=km*39370;
    printf("Distance in Inch is %d\n",inch);

    feet=km*100000/30.47;
    printf("Distance in Feet is %d\n",feet);
    
}