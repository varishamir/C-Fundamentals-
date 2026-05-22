# Addition of digits in a number

## The problem
In this problem we have a number which consist of multiple digits. For example 2314. Any number that we will chose to enter the program will return us with the sum of those digits in that number.

Like in the above mentioned number there were 4 digits, if you enter that number in the program it will return their sum, it will return the sum of 2, 3, 1, and 4 which is 10.

---

## My Approach towards this problem
My Approach towards solving any problem has always been solving any problem by asking input from user. So, in this problem I have done the same thing.

Firstly to take input from the user I have created a string variable called `number`. This variable will store all the digits that the user will enter. Because through a string variable it is much easier to do that sum of digits. Since a string variable can be used to create an array, that array can later be used to access a single digit in that number.

### Summary of the code block:
* **`number` (string variable):** Used to store user input.
* **Loop (inside the function):** Used to access every single digit of that number.
* **`sum` variable:** Used to store the sum of every two digits in each loop interval.
* **Character `'0'`:** Inside the loop, it is used to do ASCII codes adjustments.

### ASCII Adjustment Example:
Like `9 + 5` is actually $57 + 53$ (ASCII Codes) which will give an answer of `110` to the user. Adjustment using the character works like: 

$$\text{'9'} - \text{'0'} \implies 57 - 48 = 9$$
[Here is the link of code](addition-of-digits-in-a-number)
