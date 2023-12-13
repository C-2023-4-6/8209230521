#include <iostream>
#include <string.h>
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}
int main() {
    char s1[100], s2[100];
    std::cout << "Enter string s1: ";
    std::cin >> s1;
    std::cout << "Enter string s2: ";
    std::cin >> s2;
    int index = indexOf(s1, s2);
    if (index == -1) {
        std::cout << "s1 is not a substring of s2" << std::endl;
    }
    else {
        std::cout << "s1 is a substring of s2 at index " << index << std::endl;
    }
    return 0;
}