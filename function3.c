#include<stdio.h>

int sum(void);
int n;
void main(){
    int ans;
    ans = sum();
    printf("Sum : %d",ans);

}
int sum(void){
    int sum=0,i;
    printf("Enter Number What you enter in String : ");
    scanf("%d",&n);

    int ar[n];
    printf("Enter Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
       sum+=ar[i];
    }
    return sum;

}