#include<iostream>
using namespace std;
int totalPeach(int day) {
    if (day == 1) {
        return 1; // ��ʮ��ʣ��һ������
    }
    else {
        return (totalPeach(day - 1) + 1) * 2; // ��ǰ���������ǰһ�������������1�������
    }
}
int main() {
    cout << "��һ����ӹ�ժ�� " << totalPeach(10) << " ������" << endl;
    return 0;
}