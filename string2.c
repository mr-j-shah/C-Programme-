#include<stdio.h>
#include<string.h>

void main(){

    char name[100],cpy[100];
    int len,i,j,k;

    
    gets(name);
    len=strlen(name);

    printf("%d\n",len);
    len--;

    for ( i = 0,j=len; i <= len; i++,j--)
    {
        cpy[i]=name[j];
    }
    cpy[i]='\0';
    puts(cpy);
    for(i=0;cpy[i]!='\0';i++){
        if(cpy[i]==name[i]){
            k=0;
        }
        else
            k=1;
    }

    if(k==0){
        printf("Number is palindrom");
    }
    else
        printf("Number is nOT pALIndrom");
}