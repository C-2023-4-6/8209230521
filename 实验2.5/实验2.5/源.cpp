#include <iostream>
#include <string>
int main() {
    std::string input;
    int alpha_count = 0, digit_count = 0, space_count = 0, other_count = 0;
    std::cout << "请输入一行字符：";
    getline(std::cin, input);
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            alpha_count++;
        }
        else if (c >= 'A' && c <= 'Z') {
            alpha_count++;
        }
        else if (c >= '0' && c <= '9') {
            digit_count++;
        }
        else if (c == ' ') {
            space_count++;
        }
        else {
            other_count++;
        }
    }
    std::cout << "英文字母个数：" << alpha_count << '\n';
    std::cout << "数字字符个数：" << digit_count << '\n';
    std::cout << "空格个数：" << space_count << '\n';
    std::cout << "其他字符个数：" << other_count << '\n';
    return 0;
}