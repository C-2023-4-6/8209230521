#include <iostream>
#include <algorithm>
// ��������
int gcd(int a, int b);
int lcm(int a, int b);
int main() {
    int a, b;
    std::cout << "������������������" << std::endl;
    std::cin >> a >> b;
    std::cout << "���Լ���ǣ�" << gcd(a, b) << std::endl;
    std::cout << "��С�������ǣ�" << lcm(a, b) << std::endl;
    return 0;
}
// �������Լ��
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
// ������С������
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}