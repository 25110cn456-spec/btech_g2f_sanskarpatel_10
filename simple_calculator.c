#include<stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch(op)
    {
        case '+':
            printf("Result = %f", a + b);
            break;

        case '-':
            printf("Result = %f", a - b);
            break;

        case '*':
            printf("Result = %f", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %f", a / b);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
