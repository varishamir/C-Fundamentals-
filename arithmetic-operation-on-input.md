# Arithmetic Operations on Input
## Problem

In this problem I have made a simple calculator, which can perform multiple arithmetic operations on the input. Such as addition, subtraction, multiplication and division.

## Solution

In order to solve make a calculator I need minimum of two inputs. Because operations such as addition, subtraction, multiplication and division cannot be performed on one number. The two inputs that this program will need should be any two numbers. 

To take those two inputs(numbers), I have created two different variables. Remember that in order to take input you need to have variables which could store it. Because variable is a named memory location and you need to reserve some space in the memory to store anything from program.

The variables that I have created are `a` and `b`. Both `a` and `b` will store the numbers that the user will input. It will work this way, that first of all it will ask the user `a=`, where the user will enter the first number it will be stored in `a` variable, then it will ask the user `b=` for the second number, once the user provides it, the program will store it in variable `b`.

Once the user is done with both of the inputs, then the program asks the user about what arithmetic operation they want to be performed on his/her input. At there the user can input one of these signs: `+`(Addition), `-`(Subtraction), `*`(Multiplication), or `/`(Division). After the user enters the sign it will be stored `arithmetic_sign` variable. And then through switch method it will search for the similar case, once the program finds it out, it goes into that case's body and then it performs that particular operation on the input and then it provides the output back to the program, which then gets displayed on users console screen.

[Here is the link to code](arithmetic-operations-on-input)
