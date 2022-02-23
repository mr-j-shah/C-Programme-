#include<stdio.h>

// Area of Squre
void main(){
    void squre()
    {
        int l,area;
        printf("Enter the value of length of line  = ");
        scanf("%d",&l);
        area=l*l;

        printf("Aarea of Squre is %d\n",area);

    }
    
    void rectangle(){
        int l,b,area;
        printf("Enter the value of length = ");
        scanf("%d",&l);
        printf("Enter the value of width = ");
        scanf("%d",&b);

        area=l*b;

        printf("Area of rectangle is %d\n",area);
    }
    void tringle(){
        int h,b,area;

        printf("Enter the value of base = ");
        scanf("%d",&b);

        printf("Enter the value of height = ");
        scanf("%d",&h);

        area=b*h/2;

        printf("Aarea of tringle is %d\n",area);
    

    }
    void circle(){
        int r;
        float pie=3.14,area;
    
        printf("Enter the value of Redius = ");
        scanf("%d",&r);

        area=pie*r*r;

        printf("Area of Circle is %.1f",area);

    }

    squre();
    rectangle();
    tringle();
    circle();
    

}