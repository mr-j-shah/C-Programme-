#include<stdio.h>
int fibo(int,int,int);

void main(){

    int n,a,b;
    printf("Enter Number : ");
    scanf("%d",&n);
    a=0;
    b=1;
    fibo(a,b,n);

}

int fibo(int sum1, int sum2, int n){
    int sum;
    if(n==0){

    }
    else
    {
        sum=sum1+sum2;
        printf("%d\t",sum);
        sum2=sum1;
        sum1=sum;

        fibo(sum1,sum2,n-1);


    }
    
}