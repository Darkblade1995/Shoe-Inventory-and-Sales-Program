Footwear Sales & Profit Management System
Overview

This project is a console-based footwear sales management system developed in C++.
It is designed to manage shoe sales data and automatically calculate pricing, profit margins, and total revenue based on production cost, quantity, and shoe category.

The program simulates a real-world sales scenario where business rules determine profit percentages according to cost ranges, making it a practical example of applied programming logic.

Features

Register shoe information (reference, description, size, availability, and quantity)

Automatically classify shoes into categories (A, B, or C) based on cost

Apply different profit margins depending on the shoe category

Calculate:

Unit cost and total cost

Unit selling price and total selling price

Profit per unit and total profit

Support for entering multiple shoes in a single execution

Clear and formatted console output

Business Logic

The selling price is calculated according to the shoe cost:

Category A (cost ≤ 30,000): 50% profit

Category B (cost ≤ 60,000): 40% profit

Category C (cost > 60,000): 30% profit

This logic reflects a simple but realistic pricing strategy commonly used in retail businesses.

Technologies Used

C++

Standard libraries:

<iostream> for input/output

<iomanip> for formatted numerical output

<string> for handling text data

How to Run

Compile the program using a C++ compiler (e.g. g++):

g++ main.cpp -o footwear_manager


Run the executable:

./footwear_manager


Follow the instructions displayed in the console.

Learning Outcomes

This project demonstrates:

Control structures (if-else, switch, loops)

User input handling

Basic business rule implementation

Financial calculations

Clean and structured console applications in C++

It is suitable as a beginner to intermediate C++ project and as part of a programming portfolio.

Author

Luis Fernando Agamez Atehortua
