# Coin-Weights

## Description
If you put all your $20 bills, $10 bills, $5 bills, $1 bills, quarters, dimes, nickels, and pennies on a scale, how much would it weigh?
This program will read eight numbers (all integers) from a user using the format shown below:

                Enter the number of $20s you have: 3
                Enter the number of $10s you have: 1
                Enter the number of $5s you have: 4
                Enter the number of $1s you have: 1
                Enter the number of quarters you have: 5
                Enter the number of dimes you have: 9
                Enter the number of nickels you have: 26
                Enter the number of pennies you have: 53

The program then outputs the total number of bills and cents entered.
It also outputs the weight of the bills and the weight of the cents.
Finally, it outputs the total weight of all the money.

Below is an example output:
                
                You have 91 dollars in bills and 398 cents in change.
                The weight of your bills is 0.019842 pounds.
                The weight of your change is 0.686214 pounds.
                Your money can go a total of 0.706056 pounds.
                
## Compilation and Execution
The program can be compiled using
```bash
gcc -Wall weight.c -o weight
```

Execute using ./weight

## Extra Notes
This program uses the following conversion to convert from grams to pounds:
                1 gram = 0.002202462 pounds
                
Click [here](https://www.usmint.gov/about_the_mint/index583f.html?action=coin_specifications) to view the various coin weights.
