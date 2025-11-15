//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.//
#include <stdio.h>
int main () {
    enum Operation { ADD = 1, SUBTRACT, MULTIPLY };
    int choice;
    double num1, num2, result;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}