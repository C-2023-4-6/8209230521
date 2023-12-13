#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
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
    const char* s1 = "hello";
    const char* s2 = "hello world";
    int index = indexof(s1, s2);
    if (index == -1) {
        cout << s1 << " is not a substring of " << s2 << endl;
    }
    else {
        cout << s1 << " is a substring of " << s2 << " at index " << index << endl;
    }
    return 0;
}