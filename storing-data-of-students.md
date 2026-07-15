# Student Grade Evaluator

A lightweight C++ console application that filters and displays passing students from a dataset based on their marks. 

---

## Features

* **Structured Data:** Uses a custom C++ `struct` to organize student records (Name and Marks).
* **Conditional Filtering:** Automatically evaluates and identifies students who have scored **50 or above**.
* **Clean Output:** Displays the results directly in the console.

---

## How It Works

The program executes the following logical steps:

1. **Structure Definition:** A `student` structure is defined to bundle a student's name (`string`) and their marks (`float`) together.
2. **Array Initialization:** An array of 5 student records is pre-configured with names and scores.
3. **Iterative Evaluation:** A `for` loop runs through the array, checking each student's marks.
4. **Threshold Check:** If a student's marks are $\ge 50$, their name and score are printed to the console as a passing grade.

[here is the link to code](storing-data-of-students)
