#include<stdio.h>
#include<conio.h>

void main(){
    
    int a,b,sum,sub,mul;
    float div;
    printf("Enter value of Numebr 1 ");
    scanf("%d",&a);

    printf("Enter value of Number 2 ");
    scanf("%d",&b);

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("SUM = %d\n",sum);
    printf("SUB = %d\n",sub);
    printf("MUL = %d\n",mul);
    printf("DIV = %.2f\n",div);
    


}