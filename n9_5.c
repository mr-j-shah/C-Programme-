#include<stdio.h>

void main(){

    int ar1[100],ar2[100];
    int n1,n2,tem;
    printf("Enter Term for array 1 : ");
    scanf("%d",&n1);
    
    printf("Enter Term for array 2 : ");
    scanf("%d",&n2);

    printf("Enter Array 1 element : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&ar1[i]);
    }
    
    printf("Enter Array 2 element : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&ar2[i]);
    }

    for (int i = n1,j=0; i < n1+n2,j<n2; i++,j++)
    {
        ar1[i]=ar2[j];
    }

    
    
    for (int i = 0; i < n1+n2; i++)
    {
        for (int j = 0; j < n1+n2; j++)
        {
            if (ar1[j]>ar1[j+1])
            {
                tem=ar1[j];
                ar1[j]=ar1[j+1];
                ar1[j+1]=tem;
            }
            
        }
        
    }
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d\t",ar1[i]);
    }
    
}