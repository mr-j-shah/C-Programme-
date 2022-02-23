#include<stdio.h>
void main(){
    int res,a=10,b=20,c=30;
    res=(a>b?(a>c:3:4) : (b>c?6:8));
    printf(“%d”,res);

}