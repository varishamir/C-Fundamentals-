# Calculator

## Problem
Instead of building a separate C++ program for each arithmetic operation to be performed on, we can build a calculator which can perform multiple arithmetic operations through one C++ program.

In order to make a calculator, we can use the function method, in which we put the main formula into a separate function instead of the `main` function and then we call that in the `main` to work. Because everything about the code that your compiler reads, it reads it from the `main` function.

---

## Solution
Here in this code mentioned below, I have coded a calculator by myself and it works through the method that I have mentioned above, which is the function method.

The function that I have created in this code is `calculator`, which has stored the main part of the code—the main process through which some numbers have to go in order to provide the user with the answer. And those numbers will be given by the user. As I have mentioned previously, I most of the time code in a way which works on user input.

The function `calculator` has a `switch` structure created inside it which will work for the operator that the user will enter. It will search for the matching operator throughout and then work on it, and then it will return a value, which is something that the function has returned. Then, when we call it in the `main` function, it will show that input on the console screen that will be visible to the user.
[Here in the link of code](calculator-(Function))
