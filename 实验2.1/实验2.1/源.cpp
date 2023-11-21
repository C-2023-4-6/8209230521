#include <iostream>
int main() {
    char c;
    std::cout << "请输入一个字符：";
    std::cin >> c;
    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    }
    else {
        c = c + 1;
    }
    std::cout << "输出结果为：" << c << std::endl;
    return 0;
}