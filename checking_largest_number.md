# Logic Breakdown: Finding the Largest of Three Numbers

This document explains the conditional logic used to find the largest of three user-inputted numbers ($a$, $b$, and $c$) using standard programming logic.

---

## The Comparison Logic

The program determines the largest number by systematically comparing them using conditional statements and the logical **AND** (`&&`) operator.

### 1. Checking the First Number ($a$)
* **Condition:** `if (a > b && a > c)`
* **Explanation:** For $a$ to be the largest, it must be strictly greater than $b$ **AND** strictly greater than $c$. If this evaluates to true, the program prints that the first number is the largest and skips the remaining checks.

### 2. Checking the Second Number ($b$)
* **Condition:** `else if (b > a && b > c)`
* **Explanation:** If the first condition fails, it means $a$ is not the largest. The program then checks if $b$ is strictly greater than both $a$ **AND** $c$. If true, the second number is printed as the largest.

### 3. The Fallback ($c$)
* **Condition:** `else`
* **Explanation:** If both previous conditions fail, it means neither $a$ nor $b$ is the largest. By process of elimination, the third number ($c$) must be the largest, so the program defaults to printing $c$.



---

## Key Takeaway

> ⚠️ **Edge Case Note:** Because this logic uses strict inequality (`>`), entering duplicate highest numbers (for example: `5`, `5`, `2`) will cause the logic to skip the first two blocks and default to the `else` block, printing the third number as the largest. To perfectly handle duplicate numbers, a greater-than-or-equal-to (`>=`) operator is typically preferred.


[Here is the link to code](checking_largest_number)
