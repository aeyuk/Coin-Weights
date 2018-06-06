/* Cate Yuk. Reads eight values concerning the number of different coins and bills, calculating how many dollars and cents you have, as well as how much they weigh together in pounds. */

#include <stdio.h>

int main(void) {
    
    int numTwenties = 0;
    int numTens = 0;
    int numFives = 0;
    int numOnes = 0;
    int numQuarters = 0;
    int numDimes = 0;
    int numNickels = 0;
    int numPennies = 0; 


    printf("Enter the number of $20s you have: ");
    scanf("%d", &numTwenties);

    printf("Enter the number of $10s you have: ");
    scanf("%d", &numTens);

    printf("Enter the number of $5s you have: ");
    scanf("%d", &numFives);

    printf("Enter the number of $1s you have: ");
    scanf("%d", &numOnes);

    printf("Enter the number of quarters you have: ");
    scanf("%d", &numQuarters);

    printf("Enter the number of dimes you have: ");
    scanf("%d", &numDimes);

    printf("Enter the number of nickels you have: ");
    scanf("%d", &numNickels);

    printf("Enter the number of pennies you have: ");
    scanf("%d", &numPennies);


    int numBillsTotal = (numTwenties * 20) + (numTens * 10) + (numFives * 5) + numOnes;
    int numCentsTotal = (numQuarters * 25) + (numDimes * 10) + (numNickels * 5) + numPennies;
    
    double gramsBills = 1.000;
    double gramsQuarter = 5.670;
    double gramsDime = 2.268;
    double gramsNickel = 5.000;
    double gramsPenny = 2.500;
    
    double lbsBillsTotal = 0;
    double lbsQuartersTotal = 0;
    double lbsDimesTotal = 0;
    double lbsNickelsTotal = 0;
    double lbsPenniesTotal = 0;
    double lbsCoinsTotal = 0;
    double lbsMoneyTotal = 0;



    lbsBillsTotal = ((numTwenties * gramsBills) + (numTens * gramsBills) + (numFives * gramsBills) + (numOnes * gramsBills)) * .00220462;

    lbsQuartersTotal = (numQuarters * gramsQuarter) * .00220462;

    lbsDimesTotal = (numDimes * gramsDime) * .00220462;

    lbsNickelsTotal = (numNickels * gramsNickel) * .00220462;

    lbsPenniesTotal = (numPennies * gramsPenny) * .00220462;

    lbsCoinsTotal = lbsQuartersTotal + lbsDimesTotal + lbsNickelsTotal + lbsPenniesTotal;

    lbsMoneyTotal = lbsCoinsTotal + lbsBillsTotal;

    
    printf("You have %d dollars in bills and %d cents in change.\n", numBillsTotal, numCentsTotal);
    printf("The weight of your bills is %lf pounds.\n", lbsBillsTotal);
    printf("The weight of your change is %lf pounds.\n", lbsCoinsTotal);
    printf("Your money can go a total of %lf pounds. \n", lbsMoneyTotal);

    
return 0;

}
