#include <stdio.h>

int main() {
    int choice;
    double a, b;

    do {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus (integers only)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);

        switch (choice) {
            case 1:
                printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
                break;
            case 2:
                printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
                break;
            case 3:
                printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else
                    printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
                break;
            case 5:
                if ((int)b == 0)
                    printf("Error: Modulus by zero is not allowed.\n");
                else
                    printf("Result: %d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
                break;
        }
    } while (1);

    return 0;
}
