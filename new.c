#include <stdio.h>

int main() {
    int category, choice;
    double input, output;

    printf("--- Scientific Unit Converter ---\n");
    printf("Select Category: \n1. Temperature\n2. Distance\n3. Mass\n4. Time\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &category);

    switch (category) {
        case 1: 
            printf("\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            printf("Enter value: ");
            scanf("%lf", &input);

            switch (choice) {
                case 1: output = (input * 9/5) + 32; break;
                case 2: output = (input - 32) * 5/9; break;
                case 3: output = input + 273.15; break;
                default: printf("Invalid Sub-choice"); return 1;
            }
            printf("Result: %.2lf\n", output);
            break;

        case 2: 
            printf("\n1. Meters to Kilometers\n2. Miles to Kilometers\n3. Feet to Meters\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            printf("Enter value: ");
            scanf("%lf", &input);

            switch (choice) {
                case 1: output = input / 1000; break;
                case 2: output = input * 1.60934; break;
                case 3: output = input * 0.3048; break;
                default: printf("Invalid Sub-choice"); return 1;
            }
            printf("Result: %.2lf\n", output);
            break;

        case 3: 
            printf("\n1. Kilograms to Pounds\n2. Grams to Kilograms\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            printf("Enter value: ");
            scanf("%lf", &input);

            switch (choice) {
                case 1: output = input * 2.20462; break;
                case 2: output = input / 1000; break;
                default: printf("Invalid Sub-choice"); return 1;
            }
            printf("Result: %.2lf\n", output);
            break;

        case 4:
            printf("\n1. Hours to Minutes\n2. Minutes to Seconds\n3. Days to Hours\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            printf("Enter value: ");
            scanf("%lf", &input);

            switch (choice) {
                case 1: output = input * 60; break;
                case 2: output = input * 60; break;
                case 3: output = input * 24; break;
                default: printf("Invalid Sub-choice"); return 1;
            }
            printf("Result: %.2lf\n", output);
            break;

        default:
            printf("Invalid Category Selected.\n");
    }

    return 0;
}