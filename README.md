### Perfect Number Checker in C

This C program checks whether an input number is a **perfect number**. A **perfect number** is a number that is equal to the sum of its divisors, excluding itself. For example, 6 is a perfect number because its divisors (excluding 6 itself) are 1, 2, and 3, and their sum is 6.

### Code Explanation

#### 1. **Header Files:**
```c
#include <stdio.h>
#include <stdlib.h>
```
These header files allow the use of standard input/output functions (`stdio.h`) and memory management functions (`stdlib.h`).

#### 2. **Function Declaration:**
```c
void PerfectNumber(int num);
```
This declares a function named `PerfectNumber`, which checks if a number is perfect.

#### 3. **Main Function:**
```c
int main()
{
    int num;
    printf("Please enter a integer: ");
    scanf("%d",&num);
    PerfectNumber(num);

    return 0;
}
```
- The `main` function starts by declaring an integer `num`.
- The program prompts the user to enter an integer value.
- The input number is scanned and passed to the `PerfectNumber` function.
- The program ends by returning 0, which indicates successful execution.

#### 4. **PerfectNumber Function:**
```c
void PerfectNumber(int num)
{
    int result = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            result += i;
        }
    }
    if(num == result)
        printf("%d is Perfect Number.",num);
    else
        printf("%d is not Perfect Number.",num);
}
```
- This function initializes a variable `result` to 0, which will hold the sum of the divisors of `num`.
- The `for` loop iterates over all integers less than `num`. For each integer `i`, if `i` divides `num` evenly (i.e., no remainder), `i` is added to `result`.
- After the loop, the sum of divisors (`result`) is compared to the original number (`num`).
- If they are equal, the program prints that the number is a perfect number. Otherwise, it prints that the number is not perfect.

### Example Execution

**Input**:  
`6`  
**Output**:  
`6 is Perfect Number.`

**Input**:  
`8`  
**Output**:  
`8 is not Perfect Number.`

### Summary
This program checks if a number is perfect by calculating the sum of its divisors (excluding itself) and comparing the sum to the original number. The logic works through iteration and basic conditional checks.

