#include <iostream>
#include <algorithm>
using namespace std;
// �Զ�̬�����������ĺ���
void sortArray(int* arr, int size) {
    sort(arr, arr + size);
}
int main() {
    int size; // �����С
    cout << "�����������С��";
    cin >> size;
    // ��̬��������
    int* arr = new int[size];
    if (arr == nullptr) {
        cout << "�ڴ����ʧ�ܣ�" << endl;
        return 1;
    }
    // ��������Ԫ��
    cout << "����������Ԫ�أ�" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // ��������
    sortArray(arr, size);
    // �������Ԫ��
    cout << "����������Ϊ��" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // �ͷ������ڴ�
    delete[] arr;
    return 0;
}