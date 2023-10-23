#include <stdio.h>
#include <stdio.h>

void calc(double num1, double num2, char op);

int main()
{
    double num1 = 0, num2 = 0;

    printf("1st number : ");
    if (!scanf("%lf", &num1))
    {
        printf("Error! Not a Number!!!!");
        return 0;
    }

    printf("2nd number : ");
    if (!scanf("%lf", &num2))
    {
        printf("Error! Not a Number!!!!");
        return 0;
    }

    printf("Operation Type (+, -, *, /) : ");
    char operation;
    // Error Validation is Handled by the Default case in Switch Statement
    scanf(" %c", &operation);

    calc(num1, num2, operation);

    return 0;
}

void calc(double num1, double num2, char op)
{
    switch (op)
    {
    case '+':
        printf("%.3lf + %.3lf = %.3lf\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.3lf - %.3lf = %.3lf\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.3lf * %.3lf = %.3lf", num1, num2, num1 * num2);
        break;
    case '/':
        if (!num2)
        {
            printf("Dividing by Zero is not possible!!!!\n");
            break;
        }
        printf("%.3lf / %.3lf = %.3lf", num1, num2, num1 / num2);
        break;
    default:
        printf("Error! Operator is not correct\n");
    }
}