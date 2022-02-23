#include<stdio.h>
#include<conio.h>

void main(){
    char str[20];
    gets(str);
    int i=0,len=0;
    puts(str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of string is %d",len);

}