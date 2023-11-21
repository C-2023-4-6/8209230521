#include<iostream>
#include<cmath>
double SquareRoot(double a) {
    double xn = a;  // ��ʼ�²�ֵ
    double error = 1.0;  // ��ʼ���ֵ������Ϊ1��ʼ����
    while (abs(error) > 1e-5) {  // �����ֵ����10^-5ʱ��������
        double xn_1 = xn - (xn * xn - a) / (2 * xn);  // ţ�ٵ�����ʽ
        error = abs(xn_1 - xn);  // �������ֵ
        xn = xn_1;  // ���²²�ֵ
    }
    return xn;
}
int main() {
    double a;
    std::cout << "������һ����a��";
    std::cin >> a;
    std::cout << "a��ƽ�����ǣ�" << SquareRoot(a) << std::endl;
    return 0;
}