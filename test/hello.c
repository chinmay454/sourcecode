#include <stdio.h>

int main() {
    int a, b, choice;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nSelect operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = (float)a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

