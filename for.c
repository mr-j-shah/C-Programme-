#include<stdio.h>
#include<conio.h>

void main(){

    int term,sum=0,k;
    printf("Enter Term : ");
    scanf("%d",&term);
    int copy=term+1;

    
    
    for (int j = 1; j < copy; j++)
    {
        /* code */
        k=j;
        k=k*k;
        sum=sum+k;
            
    }
    
    printf("%d",sum);
}