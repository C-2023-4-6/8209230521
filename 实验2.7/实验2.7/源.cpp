#include<iostream>
int main() {
    for (int i = 1; i <= 5; i++) { // ������������1��5
        for (int j = 1; j <= i; j++) { // ��ÿһ�������Ӧ�������Ǻ�
            std::cout << "*";
        }
        std::cout << std::endl; // �����һ�к���
    }
    return 0;
}