#include<stdio.h>
#include<conio.h>

void main(){

    char c;
    FILE *p,*q;
    p=fopen("abc.txt","r");
    q=fopen("cpy.txt","w");
    while (1)
    {
        c=fgetc(p);
        if (c==EOF)
        {
            break;
        }
        else{
            fputc(c,q);

        }
        
    }
    fclose(p);
    fclose(q);
    

}