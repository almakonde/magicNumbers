#include <iostream>
#include "base13.h"

#include "beautiful_number.h"
int main() {

    unsigned long long beautifulNumberCount = countBeautifulNumbers() * 13;
    //�������� ��������� �� 13, ������ ��� ������ ����� � 13-������� ������ ����� ���� ����� �� 13 ��������� ��������
    std::cout << "���������� �������� ����� � ������ : " << beautifulNumberCount << std::endl;
    return 0;
}
