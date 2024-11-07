//VICTOR NJERI
CT102/G/23877/24
#include <stdio.h>

void calculatePay(float hoursWorked, float hourlyWage) {
    float regularHours = (hoursWorked <= 40) ? hoursWorked : 40;
    float overtimeHours = (hoursWorked > 40) ? (hoursWorked - 40) : 0;
    
    float regularPay = regularHours * hourlyWage;
    float overtimePay = overtimeHours * hourlyWage * 1.5;
    float grossPay = regularPay + overtimePay;
    
    float taxes;
    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = 0.15 * 600 + 0.20 * (grossPay - 600);
    }
    
    float netPay = grossPay - taxes;
    
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);
}

int main() {
    float hoursWorked, hourlyWage;
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);
    calculatePay(hoursWorked, hourlyWage);
    return 0;
}
