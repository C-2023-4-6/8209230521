#include "mytemperature.h"
#include <iostream>
#include <iomanip> 
int main() {
    std::cout << std::fixed << std::setprecision(2); // 设置输出精度为小数点后两位
    for (double cel = 31.0; cel >= 30.0; cel -= 1.0) { // 从31.0摄氏度开始，每次减少1.0摄氏度，直到30.0摄氏度为止
        double fah = celsius_to_fah(cel); // 将摄氏温度转换为华氏温度并存储在变量fah中
        std::cout << "Celsius: " << cel << ", Fahrenheit: " << fah << std::endl; // 输出摄氏温度和华氏温度
    }
    std::cout << "|"; // 输出分隔符
    for (double fah = 120.0; fah >= 110.0; fah -= 10.0) { // 从120.0华氏度开始，每次减少10.0华氏度，直到110.0华氏度为止
        double cel = fahrenheit_to_cels(fah); // 将华氏温度转换为摄氏温度并存储在变量cel中
        std::cout << " Fahrenheit: " << fah << ", Celsius: " << cel << std::endl; // 输出华氏温度和摄氏温度
    }
    return 0;
}