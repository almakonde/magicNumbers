#include "beautiful_number.h"
#include <vector>
#include <algorithm>

unsigned long long countBeautifulNumbers() {
    const int digitsCount = 6;
    const int numeralSystem = 13;
    const int maxDigitValue = numeralSystem - 1;
    const int maxSum = digitsCount * maxDigitValue;

    std::vector<std::vector<unsigned long long>> partialSolutions(digitsCount + 1, std::vector<unsigned long long>(maxSum + 1, 0));
    partialSolutions[0][0] = 1;

    for (int n = 1; n <= digitsCount; ++n) {
        for (int sum = 0; sum <= n * maxDigitValue; ++sum) {
            for (int digit = 0; digit < numeralSystem; ++digit) {
                if (sum >= digit) {
                    partialSolutions[n][sum] += partialSolutions[n - 1][sum - digit];
                }
            }
        }
    }

    unsigned long long result = 0;
    for (int sum = 0; sum <= maxSum; ++sum) {
        result += partialSolutions[digitsCount][sum] * partialSolutions[digitsCount][sum];
    }

    return result;
}
