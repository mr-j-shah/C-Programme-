include<stdio.h>

void main(){

    int n,i;
    printf("Enter term what you want to enter in one array : ");
    scan#f("%d",&n);

    int array[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter %d term : ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Array in reverse direction : ");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d\t",array[i]);
    }
    
}