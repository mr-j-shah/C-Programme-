#include<stdio.h>

void  main(){

    FILE *f,*fr;
    int i,k;
    char j[100];
    int r;
    f=fopen("Student.txt","w");
    printf("Enter Id number of Student : ");
    for ( i = 0; i < 3; i++)
    {
        /* code */
        scanf("%s",j);
        fputs(j,f);
    }
    fclose(f);
    fr=fopen("Student.txt","r");
    for ( i = 0; i < 3; i++)
    {
        fseek(fr,4L,0);
        for ( k = 0; k < 3; k++)
        {
            fscanf(fr,"%d",&r);
            printf("%d",r);
        }
        printf("\n");
    
    }
    fclose(fr);
    
       
}