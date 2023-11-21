#include<iostream>
#include<cmath>
double SquareRoot(double a) {
    double xn = a;  // 初始猜测值
    double error = 1.0;  // 初始误差值，设置为1开始迭代
    while (abs(error) > 1e-5) {  // 当误差值大于10^-5时继续迭代
        double xn_1 = xn - (xn * xn - a) / (2 * xn);  // 牛顿迭代公式
        error = abs(xn_1 - xn);  // 计算误差值
        xn = xn_1;  // 更新猜测值
    }
    return xn;
}
int main() {
    double a;
    std::cout << "请输入一个数a：";
    std::cin >> a;
    std::cout << "a的平方根是：" << SquareRoot(a) << std::endl;
    return 0;
}