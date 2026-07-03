# Checking Eligibility For Vote

## Problem 
This is a very simple problem that we can solve for our better understanding of c++. 

In  this problem, we will ask the age from the user which will be the input. Based on that information about the age provided by user our program will decide if he/she is eligible for vote or not.
As we all know that a person under 18 cannot vote. And people who are 18 or above, can vote. We have to keep this condition in our code. In order to tell the user if he/she is eligible or not.

## Solution

To solve this problem I have created a variable called `age`. Which will store the input that the user will provide.

After the `age` variable, I have used the method of *two-way-selection-struture*. Through which, this program will be able to decide if the user is eligible or not.

The question may arise that: What is *Two-way-selection-method*? This method consist of two different coditions and based on the input the program decides which condition will work and provides the output. 

For example here we have two condition: 
1. The user's age is 18 or above
2. The user's age is less than 18.

The structure of *Two-way-selection-method* is *if-else-structure*. *If* condition is considered the first condition which means the program will first move towards the this condition. And another codition is *else* condition, this is the condition towards which the program goes when the first condition becomes false.

!If you want to learn more about this topic then you can find it out anywhere on the internet with any of these keywords: *Two-way-selection-method-in-C++*, *Two-way-selection-structure-in-C++* or *Two-way-selection-flow-in-C++*.

Now the question is how this program will work? I can summarize it in this way that: First of all it will ask the user about his/her age `Enter_your_age:`. Once the user enter his/her age, then the program moves towards the `if` condition which is `age>=18` . 
If this becomes true then the program will move inside the `if` block. In which there is an output which will display `You_are_eligible_for_vote` on user's console screen.
If this condition becomes false then the program will move towards `else` condition, inside which there is this output `you_are_not_eligible_for_vote`, which will be displayed on the user's console screen. And then the program will end.

Thanks

[Here is the link to code](checking_eligibility_for_vote)
