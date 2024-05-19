#include <iostream>
#include "base13.h"

#include "beautiful_number.h"
int main() {

    unsigned long long beautifulNumberCount = countBeautifulNumbers() * 13;
    //Умножаем результат на 13, потому что первая цифра в 13-значных числах может быть любой из 13 возможных значений
    std::cout << "Количество красивых чисел с учетом : " << beautifulNumberCount << std::endl;
    return 0;
}
