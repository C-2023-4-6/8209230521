#include <iostream>
int main() {
    char c;
    std::cout << "������һ���ַ���";
    std::cin >> c;
    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    }
    else {
        c = c + 1;
    }
    std::cout << "������Ϊ��" << c << std::endl;
    return 0;
}