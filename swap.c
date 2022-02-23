#include<stdio.h>
void swap(int , int);
void main(){

    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter Two Number : ");
    scanf("%d",&a,&b);

    swap(*p,*q);

    printf("Now a=%d or b=%d",a,b);

}
void swap(int *p, int *q){

    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}