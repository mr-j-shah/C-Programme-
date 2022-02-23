#include<stdio.h>

void main(){

    int n,i,j;
    printf("Enter term what you want to enter in one array : ");
    scanf("%d",&n);

    int array[n][n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter %d %d term : ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Array You enter is :\n ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }   
}