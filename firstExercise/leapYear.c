#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // Leap year is divisible by 4
    // But if it is divisible by 100, it must also be divisible by 400
    if (year % 400 == 0) {
        return 1; // Leap year
    } else if (year % 100 == 0) {
        return 0; // Not a leap year
    } else if (year % 4 == 0) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;

    // Get year input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
