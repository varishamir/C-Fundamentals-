# Checking for Palindrome
## Problem
This is a classic C++ problem. In this problem we take an input from the user and check if the provided input is a palindrome or not.
A _Palindrome_ is a word consisting of letters or a number consisting of multiple digits. For example the input is `123` and it's reverse is `321` and 123 is not same as 123 so it is not a palindrome.
And when input is `12321` and reverse of it is `12321` both are same than this is a palindrome.

## Solution
Now how I have solved this is that firstly I have took the input from user inputed it in `input` variable.
Then I have found out the length of word or number, through length function. Then I have started comparing the digits letters, 1 from left `L` and 1 from right `R` and when each digit/letter from right and 
left matches with each other it counts that and then if the counts of matches are equal to the length of the number or word then it is a Palindrome otherwise it is not.
[Here is the link to code](check-for-palindrome)
