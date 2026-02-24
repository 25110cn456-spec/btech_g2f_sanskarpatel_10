#include<stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("Valid Triangle\n");

        if(a == b && b == c)
            printf("Triangle is Equilateral");
        else if(a == b || b == c || a == c)
            printf("Triangle is Isosceles");
        else
            printf("Triangle is Scalene");
    }
    else
    {
        printf("Not a Valid Triangle");
    }

    return 0;
}  
