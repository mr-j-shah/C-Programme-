#include<stdio.h>
#define p printf
#define s scanf

void main()
{
    int marks;
    p("Enter Your marks of exam : (out of Hundred)");
    s("%d",&marks);

    if (marks>=80&&marks<=100)
    {
        /* code */
        p("Youre grade is Distinction");
    }
    else if (marks<=60&&marks>=79)
    {
        /* code */
        p("Your grade is First class");
    }
    else if (marks<=59&&marks>=40)
    {
        /* code */
        p("Your grade is Second class");
    }
    else if (marks>100&&)
    {
        /* code */
        p("Enter Right Input ");
    }
    
    else
    {
        p("You are fail \n Better Luck Next Time");
    }
    

}