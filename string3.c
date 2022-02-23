#include<stdio.h>
#include<conio.h>

void main(){
    char str1[100],str2[100];
    printf("Enter two string : ");
    gets(str1);
    gets(str2);
    int len=0,i;
    for ( i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }
    
    for ( i = 0; str2[i]!='\0'; i++,len++)
    {
        str1[len]=str2[i];
    }
    puts(str1);
    
}