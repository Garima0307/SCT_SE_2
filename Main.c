#include <stdio.h>

int main() {
    float temp, converted;
    int choice;

    printf("Temperature Converter:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice (1-4): \n");
    scanf("%d", &choice);

    printf("Enter the temp: \n");
    scanf("%f", &temp);

    if (choice == 1) {
        converted = (temp * 9 / 5) + 32;
        printf("Fahrenheit: %.2f°F\n", converted);
    } else if (choice == 2) {
        converted = temp + 273.15;
        printf("Kelvin: %.2fK\n", converted);
    } else if (choice == 3) {
        converted = (temp - 32) * 5 / 9;
        printf("Celsius: %.2f°C\n", converted);
    } else if (choice == 4) {
        converted = temp - 273.15;
        printf("Celsius: %.2f°C\n", converted);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}




