#include <iostream>
void f(char* st, int i) {
    if (i <= 0) return; // 递归结束的条件
    st[i] = '\0'; // 将当前字符设置为终止字符
    std::cout << st; // 输出当前字符串
    f(st, i - 1); // 递归调用
}
int main() {
    char st[] = "abcd";
    f(st, 4);
    return 0;
}