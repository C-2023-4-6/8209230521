#include "mytemperature.h"
#include <iostream>
// 摄氏温度到华氏温度的转换
double celsius_to_fah(double cel) {
    return (cel * 9.0 / 5.0) + 32;
}
// 华氏温度到摄氏温度的转换
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}