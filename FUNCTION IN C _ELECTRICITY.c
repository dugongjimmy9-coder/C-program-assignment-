/*
Name: James Kinyua Mugo 
Reg No: CT100/G/30663/26
Description: Electricity Bill Calculator
Date: 30/09/2026
*/

#include <stdio.h>

// Tell the program that calculateBill accepts a float and returns a float
float calculateBill(float units);

int main() {
    float units, total_bill;

    // Prompt user for input
    printf("Enter units consumed: ");
    scanf("%f", &units);

    // Calculate the bill
    total_bill = calculateBill(units);

    // Display the results
    printf("\n--- ELECTRICITY BILL ---\n");
    printf("Units Consumed : %.2f\n", units);
    printf("Total Bill     : KSh %.2f\n", total_bill);
    printf("------------------------\n");

    return 0;
}

// Function to handle the rate tiers
float calculateBill(float units) {
    float bill = 0.0;

    if (units <= 100) {
        // Flat rate for first 100 units
        bill = units * 10;
    } 
    else if (units <= 200) {
        // First 100 units @ 10 + remaining units @ 15
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        // First 100 units @ 10 + next 100 units @ 15 + remaining units @ 20
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}