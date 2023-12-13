#include <iostream>
#include <cstring>
#include <cctype>
void count(const char s[], int counts[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (std::isalpha(c)) {
            // 将字母转换为小写，以便统一计数
            c = std::tolower(c);
            counts[c - 'a']++;
        }
    }
}
int main() {
    const char s[] = "Hello, world!";
    int counts[26] = { 0 };
    count(s, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            char c = 'a' + i;
            std::cout << c << ": " << counts[i] << std::endl;
        }
    }
    return 0;
}