/*
Name: James Kinyua Mugo 
Reg No: CT100/G/30663/26
Description: Employee Net Salary Calculator
Date: 02/10/2026
*/

#include <stdio.h>

// Function prototype
float calculateTax(float grossSalary);

int main() {
    float grossSalary, taxAmount, netSalary;

    // Get gross salary input
    printf("Enter employee's gross salary (KSh): ");
    scanf("%f", &grossSalary);

    // Calculate tax and net salary
    taxAmount = calculateTax(grossSalary);
    netSalary = grossSalary - taxAmount;

    // Print results
    printf("\n-----------------------------------------\n");
    printf("            PAYROLL SUMMARY              \n");
    printf("-----------------------------------------\n");
    printf("Gross Salary : KSh %.2f\n", grossSalary);
    printf("Tax Deducted : KSh %.2f\n", taxAmount);
    printf("Net Salary   : KSh %.2f\n", netSalary);
    printf("-----------------------------------------\n");

    return 0;
}

// Function definition to calculate tax based on salary brackets
float calculateTax(float grossSalary) {
    if (grossSalary < 30000) {
        return grossSalary * 0.05;
    } 
    else if (grossSalary <= 59999) {
        return grossSalary * 0.10;
    } 
    else {
        return grossSalary * 0.15;
    }
}