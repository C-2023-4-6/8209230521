#include <iostream>
#include <algorithm>
// 函数声明
int gcd(int a, int b);
int lcm(int a, int b);
int main() {
    int a, b;
    std::cout << "请输入两个正整数：" << std::endl;
    std::cin >> a >> b;
    std::cout << "最大公约数是：" << gcd(a, b) << std::endl;
    std::cout << "最小公倍数是：" << lcm(a, b) << std::endl;
    return 0;
}
// 计算最大公约数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
// 计算最小公倍数
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}