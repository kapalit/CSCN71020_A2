/*
 * CSCN71020 Assignment 2 - Rectangle Calculator
 * Author: Mohamed Al-Husainawi
 * Description: Interactive rectangle calculator with perimeter and area calculations
 */

#include <stdio.h>
#include <stdbool.h>
#include "main.h"

int main() { 
    int length = 1;
    int width = 1;
    bool continueProgram = true;
    
    while (continueProgram) {
        printWelcomeMenu();
        printOptions();

        int menuInput = getIntInput("Enter menu option number:");

        switch (menuInput) {
            case 1: {
                printf("\nThe Rectangle has a length of %i and a width of %i\n\n", length, width);
                break;
            }
            case 2: {
                int input = getIntInput("Please enter the length of the rectangle (0-99):");
                setLength(input, &length);
                printf("Length set to: %i\n\n", length);
                break;
            }
            case 3: {
                int input = getIntInput("Please enter the width of the rectangle (1-100):");
                setWidth(input, &width);
                printf("Width set to: %i\n\n", width);
                break;
            }
            case 4: {
                printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
                break;
            }
            case 5: {
                printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
                break;
            }
            case 6: {
                printf("\nThank you for using the Rectangle Calculator!\n");
                continueProgram = false;
                break;
            }
            default: {
                printf("\nInvalid value entered. Please select options 1-6.\n\n");
                break;
            }
        }
    }
    
    return 0;
}

int getIntInput(char message[]) {
    int input;
    int scannedValues;
    
    do {
        printf("\n%s\n", message);
        scannedValues = scanf_s("%i", &input);
        
        // Clear input buffer
        int buf;
        while ((buf = getchar()) != '\n' && buf != EOF);
        
        if (scannedValues != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
        }
    } while (scannedValues != 1);
    
    return input;
}

void setLength(int input, int *length) {
    if (input >= 0 && input < 100) {
        *length = input;
    } else {
        printf("Invalid length. Length must be between 0 and 99.\n");
    }
}

void setWidth(int input, int *width) {
    if (input > 0 && input <= 100) {
        *width = input;
    } else {
        printf("Invalid width. Width must be between 1 and 100.\n");
    }
}

int getPerimeter(int *length, int *width) {
    return 2 * (*length + *width);
}

int getArea(int *length, int *width) {
    return (*length) * (*width);
}

void printWelcomeMenu() {
    printf(" **********************\n");
    printf("**     Welcome to     **\n");
    printf("**    Assignment 02   **\n");
    printf(" **********************\n");
}

void printOptions() {
    printf("1. Get Rectangle Length & Width\n");
    printf("2. Change Rectangle Length\n");
    printf("3. Change Rectangle Width\n");
    printf("4. Get Rectangle Perimeter\n");
    printf("5. Get Rectangle Area\n");
    printf("6. Exit\n");
}