#include "mytemperature.h"
#include <iostream>
// �����¶ȵ������¶ȵ�ת��
double celsius_to_fah(double cel) {
    return (cel * 9.0 / 5.0) + 32;
}
// �����¶ȵ������¶ȵ�ת��
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}