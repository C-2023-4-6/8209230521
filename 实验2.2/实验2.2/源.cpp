#include <iostream>
int main() {
    double x;
    std::cout << "������x��ֵ��";
    std::cin >> x;
    if (x < 0 || x >= 10) {
        std::cout << "�����xֵ���ڹ涨��Χ�ڣ�" << std::endl;
        return 0;
    }
    if (x < 1) {
        double y = 3 - 2 * x;
        std::cout << "��0<x<1ʱ��y=" << y << std::endl;
    }
    else if (x >= 1 && x < 5) {
        double y = 0.5 * x + 1;
        std::cout << "��1��x��5ʱ��y=" << y << std::endl;
    }
    else if (x >= 5 && x < 10) {
        double y = x * x;
        std::cout << "��5��x��10ʱ��y=" << y << std::endl;
    }
    return 0;
}