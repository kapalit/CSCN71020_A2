# CSCN71020 Assignment 2 - Rectangle Calculator

A C program that calculates rectangle properties (perimeter and area) with comprehensive unit testing.

## 📋 Project Overview

This is Assignment 2 for CSCN71020, implementing a rectangle calculator with the following features:
- Interactive menu system
- Rectangle length and width management
- Perimeter and area calculations
- Input validation and error handling
- Comprehensive unit test suite

## 🚀 Getting Started

### Prerequisites
- Visual Studio 2019 or later
- C/C++ compiler support
- Microsoft Unit Testing Framework (for tests)

### Building the Project
1. Open `BCSRec.sln` in Visual Studio
2. Build the solution (Ctrl+Shift+B)
3. Run the program (F5)

### Running Tests
1. In Visual Studio, go to Test → Run All Tests
2. View test results in the Test Explorer

## 💻 Usage

1. Run the program to see the welcome menu:
   ```
    **********************
   **     Welcome to     **
   **    Assignment 02   **
    **********************
   ```

2. Choose from the following options:
   - **1**: View current rectangle dimensions
   - **2**: Change rectangle length (0-99)
   - **3**: Change rectangle width (1-100)
   - **4**: Calculate and display perimeter
   - **5**: Calculate and display area
   - **6**: Exit program

## 📁 Project Structure

```
CSCN71020_A2/
├── BCSRec.sln                    # Visual Studio solution
├── BCSRec/                       # Main application
│   ├── main.c                    # Main program logic
│   ├── main.h                    # Function declarations
│   └── BCSRec.vcxproj           # Project file
├── BCSRecUnitTest/              # Unit test project
│   ├── BCSRecUnitTest.cpp       # Test implementations
│   ├── pch.h                    # Precompiled header
│   ├── pch.cpp                  # Precompiled source
│   └── BCSRecUnitTest.vcxproj   # Test project file
├── .gitignore                   # Git ignore rules
├── .gitattributes              # Git attributes
└── README.md                   # This file
```

## 🧮 Features

### Core Functionality
- ✅ Rectangle dimension management
- ✅ Perimeter calculation: `2 × (length + width)`
- ✅ Area calculation: `length × width`
- ✅ Input validation with range checking
- ✅ Interactive menu system
- ✅ Error handling for invalid inputs

### Validation Rules
- **Length**: 0-99 (inclusive)
- **Width**: 1-100 (inclusive)
- **Input**: Integer values only

## 🧪 Unit Tests

The project includes comprehensive unit tests covering:

### Calculation Tests
- `TestgetPerimeter`: Verifies perimeter calculation
- `TestgetArea`: Verifies area calculation

### Length Validation Tests
- `TestsetLengthValid`: Valid range (0-99)
- `TestsetLengthBoundary`: Boundary values (0, 99)
- `TestsetLengthInvalid`: Invalid values (100, -1)

### Width Validation Tests
- `TestsetWidthValid`: Valid range (1-100)
- `TestsetWidthBoundary`: Boundary values (1, 100)
- `TestsetWidthInvalid`: Invalid values (0, 101, -1)

## 🔧 Technical Details

### Functions
- `getIntInput()`: Safe integer input with validation
- `setLength()`: Sets length with range validation
- `setWidth()`: Sets width with range validation
- `getPerimeter()`: Calculates rectangle perimeter
- `getArea()`: Calculates rectangle area
- `printWelcomeMenu()`: Displays welcome message
- `printOptions()`: Shows menu options

### Input Handling
- Uses `scanf_s()` for secure input
- Clears input buffer to prevent issues
- Validates numeric input and range constraints

## 🎯 Learning Objectives

This assignment demonstrates:
- C programming fundamentals
- Function design and implementation
- Pointer usage for parameter passing
- Input validation and error handling
- Unit testing methodology
- Code organization and modularity

## 👨‍💻 Author

**Mohamed Al-Husainawi**
- GitHub: [@kapalit](https://github.com/kapalit)
- LinkedIn: [Mohamed Al-Husainawi](https://www.linkedin.com/in/mohamed-al-husainawi)

## 📝 Course Information

- **Course:** CSCN71020
- **Assignment:** Assignment 2
- **Language:** C/C++
- **IDE:** Visual Studio
- **Testing:** Microsoft Unit Testing Framework

---

*This project is part of academic coursework and is intended for educational purposes.*
