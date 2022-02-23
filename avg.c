#include <stdio.h>

void main(){

    int term;
    printf("Enter Term : ");
    scanf("%d",&term);

    int a[term];
    int sum=0;
    for ( int i=0; i < term; i++)
    {
        /* code */
        printf("Enter Number %d : ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
    printf("Sum is %d ",sum);
    printf("Averege is %d",sum/term);

}