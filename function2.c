#include<stdio.h>
int add(int , int);
int sub(int , int);
int mul(int , int);
int div(int , int);

void main(){

    int a,b,ad,sb,ml,di;
    printf("Enter Numbers : ");
    scanf("%d %d",&a,&b);

    ad=add(a,b);
    sb=sub(a,b);
    ml=mul(a,b);
    di=div(a,b);

    printf("Addition is %d\n",ad);
    printf("Addition is %d\n",sb);
    printf("Addition is %d\n",ml);
    printf("Addition is %d\n",di);

}

int add(int x, int y){
    return (x+y);
}

int sub(int x, int y){
    return (x-y);
}

int mul(int x, int y){
    return (x*y);
}

int div(int x, int y){
    return (x/y);
}