#include <iostream>
#include <string>
int main() {
    std::string input;
    int alpha_count = 0, digit_count = 0, space_count = 0, other_count = 0;
    std::cout << "������һ���ַ���";
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
    std::cout << "Ӣ����ĸ������" << alpha_count << '\n';
    std::cout << "�����ַ�������" << digit_count << '\n';
    std::cout << "�ո������" << space_count << '\n';
    std::cout << "�����ַ�������" << other_count << '\n';
    return 0;
}