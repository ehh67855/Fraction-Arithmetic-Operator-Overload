# Fraction Class in C++

## Overview
This repository contains a C++ implementation of a Fraction class. The class is designed to represent mathematical fractions and includes overloaded operators for performing arithmetic and comparison operations with these fractions.

## Features
- **Fraction Representation**: Represents fractions with a numerator and a denominator.
- **Arithmetic Operations**: Supports addition, subtraction, multiplication, and division of fractions.
- **Operator Overloading**: Implements operator overloading for intuitive arithmetic and comparison operations.
- **Comparison Operations**: Includes functionality to compare fractions for equality and inequality.
- **Integer Interaction**: Allows arithmetic operations between fractions and integers.

## Getting Started
To use the `Fraction` class in your project, clone this repository and include the `Fraction.h` file in your C++ project.

bash:
git clone  https://github.com/ehh67855/Fraction-Arithmetic-Operator-Overload.git

## Usage
- Below is a simple example of how to use the Fraction class:

```
#include "Fraction.h"

int main() {
    Fraction f1(1, 2); // Represents 1/2
    Fraction f2(3, 4); // Represents 3/4

    // Performing arithmetic operations
    Fraction result = f1 + f2; // Adds f1 and f2
    !result; // Prints the result

    // Comparing fractions
    if (f1 == f2) {
        std::cout << "Fractions are equal" << std::endl;
    } else {
        std::cout << "Fractions are not equal" << std::endl;
    }

    return 0;
}
```
