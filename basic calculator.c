#include <stdio.h>
int main() 
{
    double num1, num2, result;
    char operator;
    printf("Enter the first number: ");
    scanf("%lf", &num1); 

    printf("Enter the second number: ");
    scanf("%lf", &num2); 
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2; 
    } else if (operator == '*') {
        result = num1 * num2; 
    } else if (operator == '/') 
	{
        if (num2 != 0) {
            result = num1 / num2; 
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1; 
        }
    } else 
	{
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
        return 1; 
    }
    printf("Result: %.2lf\n", result); 
    return 0; 
}
