#include <iostream>
int main() {
    double x;
    std::cout << "请输入x的值：";
    std::cin >> x;
    if (x < 0 || x >= 10) {
        std::cout << "输入的x值不在规定范围内！" << std::endl;
        return 0;
    }
    if (x < 1) {
        double y = 3 - 2 * x;
        std::cout << "当0<x<1时，y=" << y << std::endl;
    }
    else if (x >= 1 && x < 5) {
        double y = 0.5 * x + 1;
        std::cout << "当1≤x＜5时，y=" << y << std::endl;
    }
    else if (x >= 5 && x < 10) {
        double y = x * x;
        std::cout << "当5≤x＜10时，y=" << y << std::endl;
    }
    return 0;
}