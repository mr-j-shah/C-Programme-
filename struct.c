#include<stdio.h>
struct student
{
    char name[20];
    long int enrol;
    int mark[3];
    int total;

};

void main(){
    struct student x[5];
    int i,j,sum[5],max,p=0;
    for ( i = 0; i < 5; i++)
    {   
        printf("Name: ");
        gets(x[i].name);
        printf("Enter eneollment number : ");
        scanf("%d",&x[i].enrol);
        printf("Enter Marks : ");
        x[i].total=0;
        for ( j = 0; j < 3; j++)
        {   
            
            scanf("%d",&x[i].mark[j]);
            x[i].total+=x[i].mark[j];
        }
        getchar();
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\n");
        puts(x[i].name);
        printf("\t%d",x[i].enrol);
        for ( j = 0; j < 3; j++)
        {
            printf("\t%d",x[i].mark[j]);
        }
        printf("\t%d",x[i].total);
    }
    max=x[0].total;
    for ( i = 0; i < 5; i++)
    {
        if (x[i].total>max)
        {
            max=x[i].total;
            p=i;
        }
        
    }
    printf("\nTopper of the class is %s with total %d",x[p].name,x[p].total);
    
}