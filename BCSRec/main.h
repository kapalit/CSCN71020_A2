/*
 * CSCN71020 Assignment 2 - Rectangle Calculator
 * Header file containing function declarations
 * Author: Mohamed Al-Husainawi
 */

#pragma once

// Rectangle dimension management functions
void setLength(int input, int *length);
void setWidth(int input, int *width);

// Rectangle calculation functions
int getPerimeter(int *length, int *width);
int getArea(int *length, int *width);

// User interface functions
void printWelcomeMenu();
void printOptions();
int getIntInput(char message[]);