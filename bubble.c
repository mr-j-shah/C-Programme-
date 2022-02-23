#include<stdio.h>

void main(){
    int n,i,j,tem;
    
    printf("Enter Value of N : ");
    scanf("%d",&n);
     
    int ar[n];
    
    printf("Enter Elements of Array : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= n; j++)
        {
            /* code */
            if (ar[j]>ar[j+1])
            {
                tem=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tem;
            }
            
        }
        
    }
    printf("Ans : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",ar[i]);
    }

    
    
}