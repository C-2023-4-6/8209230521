#include "mytemperature.h"
#include <iostream>
#include <iomanip> 
int main() {
    std::cout << std::fixed << std::setprecision(2); // �����������ΪС�������λ
    for (double cel = 31.0; cel >= 30.0; cel -= 1.0) { // ��31.0���϶ȿ�ʼ��ÿ�μ���1.0���϶ȣ�ֱ��30.0���϶�Ϊֹ
        double fah = celsius_to_fah(cel); // �������¶�ת��Ϊ�����¶Ȳ��洢�ڱ���fah��
        std::cout << "Celsius: " << cel << ", Fahrenheit: " << fah << std::endl; // ��������¶Ⱥͻ����¶�
    }
    std::cout << "|"; // ����ָ���
    for (double fah = 120.0; fah >= 110.0; fah -= 10.0) { // ��120.0���϶ȿ�ʼ��ÿ�μ���10.0���϶ȣ�ֱ��110.0���϶�Ϊֹ
        double cel = fahrenheit_to_cels(fah); // �������¶�ת��Ϊ�����¶Ȳ��洢�ڱ���cel��
        std::cout << " Fahrenheit: " << fah << ", Celsius: " << cel << std::endl; // ��������¶Ⱥ������¶�
    }
    return 0;
}