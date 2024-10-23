Author

Samuel Tsogbe

Project Overview

This project implements a Customer Number Validator in C++. The validator checks if a customer number conforms to the following format:

2 alphabetic characters followed by 4 digits.
The customer number must be exactly 6 characters long, with the first two characters being letters and the last four being digits. If the customer number does not meet these criteria, the program will return false; otherwise, it will return true.

Project Files

The project consists of the following files:

CustomerNumberValidator.h - Contains the function declaration for the customer number validation function.
CustomerNumberValidator.cpp - Contains the implementation of the customer number validation function.
main.cpp - Provides a user interface to input a customer number and check whether it is valid.
Features

Validates Customer Numbers: Ensures the input string has exactly 6 characters, where the first two are alphabetic and the remaining four are digits.
Input Validation: The program checks both the length and the format of the input