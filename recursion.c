#include <stdio.h>

int factorial(int);

void main(){
    int a,ans;
    printf("Enter Number : ");
    scanf("%d",&a);

    ans=factorial(a);

    printf("Ans is = %d",ans);

}

int factorial(int x){

    if (x==0)
    {
        return 1;
    }
    else
    {
        x=x*factorial(x-1);
        return x;
    }
}
