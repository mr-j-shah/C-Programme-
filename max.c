#include<stdio.h>
#define p printf
void main(){
    int a,b,c;
    p("Enter number 1 ");
    scanf("%d",&a);
    p("Enter number 2 ");
    scanf("%d",&b);
    p("Enter number 2 ");
    scanf("%d",&c);

    p("\n Maxximum Number from three is : %d",(a>b)?((a>c)?a:c):((b>c)?b:c));


}