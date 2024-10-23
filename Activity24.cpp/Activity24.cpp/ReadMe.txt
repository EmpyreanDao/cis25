Customer Details Program

Overview

This program allows users to enter customer details (ID, name, and email) and then displays these details. The program includes input validation to ensure the Customer ID is an integer.

Features

	•	Input validation for Customer ID to ensure it is a valid integer.
	•	Accepts customer name and email as string inputs.
	•	Outputs the customer information after input is complete.

Project Structure

The project is split into three files:

	1.	Customer.h: Contains the Customer structure definition and function declarations.
	2.	Customer.cpp: Implements the functions to gather and print customer details.
	3.	main.cpp: Contains the main logic to prompt the user for input and display results.

How to Compile

You can compile the program using a C++ compiler. Below is the command for compiling with g++:
	g++ main.cpp Customer.cpp -o customerApp


This will create an executable file named customerApp.

How to Run

Once compiled, you can run the program from the command line:
	./customerApp


Input

The program will prompt you to enter the following:

	1.	Customer ID: Enter a valid integer.
	2.	Customer Name: Enter the name of the customer (it can include spaces).
	3.	Customer Email: Enter a valid email address.

