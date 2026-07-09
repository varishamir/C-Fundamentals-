# Simple Division Program in C++

A lightweight C++ console application that takes two floating-point numbers from the user, performs division, and displays the result.

---

## 🚀 How It Works

1. The program starts in the `main()` function and prints a welcome message.
2. It declares three variables: `num1`, `num2`, and `result`.
3. It calls the `divide()` function, passing these variables as arguments.
4. Inside `divide()`, the program prompts the user to input the two numbers, calculates the quotient, and prints the final equation to the console.

---

## 🛠️ Code Structure

* **`main()`**: The entry point of the program.
* **`divide(float num1, float num2, float result)`**: A void function that handles user input, calculation, and output display.

> ⚠️ **Note on Code Behavior:** The variables are currently passed **by value** to the `divide` function. This means the inputs and results are processed locally inside the function and do not alter the uninitialized variables back in `main()`.

---

[Here is the link to code](division-of-numbers-function)

## 💻 Sample Output

```text
Perform division
enter_number1= 10.5
enter_number2= 2
10.5 / 2 = 5.25


