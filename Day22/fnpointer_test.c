#include <stdio.h>

// Function declarations
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

int main() {
    double num1, num2, result;
    char operator;

    // Function pointer declaration
    double (*operation)(double, double);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Assigning function pointer based on operator entered
    switch (operator) {
    case '+':
        operation = add;
        break;
    case '-':
        operation = subtract;
        break;
    case '*':
        operation = multiply;
        break;
    case '/':
        operation = divide;
        break;
    default:
        printf("Invalid operator.\n");
        return 1;
    }

    // Calling function using function pointer
    result = (*operation)(num1, num2);
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

// Function definitions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}