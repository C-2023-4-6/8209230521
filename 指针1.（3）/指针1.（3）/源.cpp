#include <iostream>
void f(char* st, int i) {
    if (i <= 0) return; // �ݹ����������
    st[i] = '\0'; // ����ǰ�ַ�����Ϊ��ֹ�ַ�
    std::cout << st; // �����ǰ�ַ���
    f(st, i - 1); // �ݹ����
}
int main() {
    char st[] = "abcd";
    f(st, 4);
    return 0;
}