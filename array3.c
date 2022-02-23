#include<stdio.h>

void main(){

    int n,i;
    printf("Enter term what you want to enter in one array : ");
    scanf("%d",&n);

    int array1[n],array2[n],array3[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter %d term in array 1: ",i+1);
        scanf("%d",&array1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Enter %d term in array 2: ",i+1);
        scanf("%d",&array2[i]);
    }
    for ( i = 0; i < n; i++)
    {
        array3[i]=array1[i]+array2[i];
    }
    printf("Sum of Two array is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",array3[i]);
        
    }
}