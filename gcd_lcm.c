#include<stdio.h>

void main(){

    int num1,num2;
    printf("Enter Number1 : ");
    scanf("%d",&num1);
    printf("Enter Number2 : ");
    scanf("%d",&num2);

    int a,i,gcd=0;
    a=(num1<num2)?num1:num2;

    for ( i = 1; i <=a; i++)
    {
        if (num1%i==0&&num2%i==0)
        {
            gcd=i;
        }
    }
    printf("G.C.D. of %d and %d is %d\n",num1,num2,gcd);

    int max;
    max = (num1 > num2) ? num1 : num2;

    while (max>0) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("L.C.M. of %d and %d is %d.", num1, num2, max);
            break;
        }
        ++max;
    }
    
}
