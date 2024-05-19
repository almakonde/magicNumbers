#include "base13.h"


// Function to convert a decimal number to base-13 and store it in an array
void decimalToBase13(long long num, int base13[13]) {
    for (int i = 12; i >= 0; --i) {
        base13[i] = num % 13;
        num /= 13;
    }
}

// Function to calculate the sum of the first or last six digits of a base-13 number
int calculateSum(const int base13[13], int start) {
    int sum = 0;
    for (int i = start; i < start + 6; ++i) {
        sum += base13[i];
    }
    return sum;
}



