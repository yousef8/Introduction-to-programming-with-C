#include <stdio.h>

int main()
{
    printf("1st number : ");
    int num1;
    if (!scanf("%d", &num1))
    {
        printf("Error! Not a Number!!!!");
        return 0;
    }

    printf("2nd number : ");
    int num2;
    if (!scanf("%d", &num2))
    {
        printf("Error! Not a Number!!!!");
        return 0;
    }

    printf("Operation Type (+, -, *, /) : ");
    char operation;
    // Error Validation is Handled by the Default case in Switch Statement
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        if (!num2)
        {
            printf("Dividing by Zero is not possible!!!!\n");
            break;
        }
        printf("%d / %d = %lf", num1, num2, (double)num1 / num2);
        break;
    default:
        printf("Error! Operator is not correct\n");
    }
    return 0;
}