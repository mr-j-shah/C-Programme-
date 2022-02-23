#include<stdio.h>

void three(int x){
    int y=x;
    int r,sum=0;
    while (x!=0)
    {
        /* code */
        r=x%10;
        sum=sum+(r*r*r);
        x/=10;
    }
    
    
    if (sum==y)
    {
        /* code */
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is Not Armstrong");
    }
    
}
void four(int x){
    int y=x;
    int r,sum=0;
    while (x!=0)
    {
        /* code */
        r=x%10;
        sum=sum+(r*r*r*r);
        x/=10;
    }
    
    
    if (sum==y)
    {
        /* code */
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is Not Armstrong");
    }
    
}
void main(){

    int a,trem=0;
    printf("Enter Number : ");
    scanf("%d",&a);
    int copy=a;
    while (a!=0)
    {
        /* code */
        a/=10;
        trem+=1;
    
    }
    switch (trem)
    {
    case 3:
        /* code */
        three(copy);
        break;
    case 4:
        four(copy);
        break;
    default:
        printf("Enter Number Three Digit Or Four Digit");
        break;
    }  
}