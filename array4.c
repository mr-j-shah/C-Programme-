#include<stdio.h>

void main(){

    int n,i,ope,term;
    printf("Enter term what you want to enter in one array : ");
    scanf("%d",&n);

    int array1[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter %d term in array 1: ",i+1);
        scanf("%d",&array1[i]);
    }
    printf("what operaction you want to do \n Enter 0 for delete number \n Enter 1 for adding number \n Enter : ");
    scanf("%d",&ope);

    if (ope==0)
    {   
        printf("Which term you want to delete: ");
        scanf("%d",&term);
        
        for ( i = 0; i < n; i++)
        {
            if (term==i)
            {
                n--;
                break;
            }
        }
        for ( i = term-1; i < n+1; i++)
        {
            array1[i]=array1[i+1];
        }
        for ( i = 0; i < n; i++)
        {
            printf("%d\t",array1[i]);
        } 
    }
    else if (ope==1)
    {
        printf("Which term you want to enter: ");
        scanf("%d",&term);

        for ( i = 0; i < n; i++)
        {
            if (term==i)
            {
                n++;
                break;
            }
        }
        for ( i = term+1; i < n+1; i++)
        {
            array1[i]=array1[i-1];
        }

        printf("Enter %d term :",term);
        scanf("%d",&array1[term]);
        
        for ( i = 0; i < n; i++)
        {
            printf("%d\t",array1[i]);
        }
    }
    else
    {
        printf("Invalid input");
    }
    
    
    
}