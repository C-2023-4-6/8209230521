#include <iostream>
#include <vector>
int main() {
    // ��ʼ��һ��100��������Ԫ�ص����飬����Ԫ�ض���false���������еĴ�����ǹرյ�
    std::vector<bool> lockers(100, false);
    // ����ѧ��Ӧ�ô��ĸ������ʼ
    int start = 1;
    for (int i = 1; i < 100; i += 2) {
        // ���ѧ��Ӧ�ùرմ������ô�ͽ���Ӧ�Ĵ����״̬��Ϊtrue
        if (i % 2 == 0) {
            lockers[start] = true;
            start++;
        }
    }
    for (int i = 2; i < 100; i += 3) {
        if (i % 3 == 0) {
            lockers[start] = true;
            start++;
        }
    }
    for (int i = 3; i < 100; i += 4) {
        if (i % 4 == 0) {
            lockers[start] = true;
            start++;
        }
    }
    for (int student = 5; student <= 100; student += 5) {
        if (student % 5 == 0) {
            lockers[start] = true;
            start++;
        }
    }
    // ������п��ŵĴ����ı��
    for (int i = 0; i < lockers.size(); i++) {
        if (lockers[i]) {
            std::cout << i + 1 << " ";  // +1����Ϊ���ǵı���Ǵ�1��ʼ��
        }
    }
    return 0;
}