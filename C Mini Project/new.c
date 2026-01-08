#include <stdio.h>

int main() {
    int category, subChoice;
    double value, result;

    printf("=== Scientific Unit Converter ===\n");
    printf("Select Category:\n");
    printf("1. Temperature\n");
    printf("2. Distance\n");
    printf("3. Mass\n");
    printf("4. Time\n");
    printf("Enter category number (1-4): ");
    scanf("%d", &category);

    switch (category) {

        case 1: // Temperature
            printf("\nTemperature Conversion:\n");
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Fahrenheit to Celsius\n");
            printf("3. Celsius to Kelvin\n");
            printf("Enter conversion choice: ");
            scanf("%d", &subChoice);

            printf("Enter temperature value: ");
            scanf("%lf", &value);

            if (subChoice == 1)
                result = (value * 9 / 5) + 32;
            else if (subChoice == 2)
                result = (value - 32) * 5 / 9;
            else if (subChoice == 3)
                result = value + 273.15;
            else {
                printf("Invalid choice!\n");
                return 0;
            }

            printf("Converted Value: %.2lf\n", result);
            break;

        case 2: // Distance
            printf("\nDistance Conversion:\n");
            printf("1. Meters to Kilometers\n");
            printf("2. Miles to Kilometers\n");
            printf("3. Feet to Meters\n");
            printf("Enter conversion choice: ");
            scanf("%d", &subChoice);

            printf("Enter distance value: ");
            scanf("%lf", &value);

            if (subChoice == 1)
                result = value / 1000;
            else if (subChoice == 2)
                result = value * 1.60934;
            else if (subChoice == 3)
                result = value * 0.3048;
            else {
                printf("Invalid choice!\n");
                return 0;
            }

            printf("Converted Value: %.2lf\n", result);
            break;

        case 3: // Mass
            printf("\nMass Conversion:\n");
            printf("1. Kilograms to Pounds\n");
            printf("2. Grams to Kilograms\n");
            printf("Enter conversion choice: ");
            scanf("%d", &subChoice);

            printf("Enter mass value: ");
            scanf("%lf", &value);

            if (subChoice == 1)
                result = value * 2.20462;
            else if (subChoice == 2)
                result = value / 1000;
            else {
                printf("Invalid choice!\n");
                return 0;
            }

            printf("Converted Value: %.2lf\n", result);
            break;

        case 4: // Time
            printf("\nTime Conversion:\n");
            printf("1. Hours to Minutes\n");
            printf("2. Minutes to Seconds\n");
            printf("3. Days to Hours\n");
            printf("Enter conversion choice: ");
            scanf("%d", &subChoice);

            printf("Enter time value: ");
            scanf("%lf", &value);

            if (subChoice == 1)
                result = value * 60;
            else if (subChoice == 2)
                result = value * 60;
            else if (subChoice == 3)
                result = value * 24;
            else {
                printf("Invalid choice!\n");
                return 0;
            }

            printf("Converted Value: %.2lf\n", result);
            break;

        default:
            printf("Invalid category selected!\n");
    }

    return 0;
}
