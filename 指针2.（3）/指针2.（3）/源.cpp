#include <iostream>
#include <algorithm>
using namespace std;
// 对动态数组进行排序的函数
void sortArray(int* arr, int size) {
    sort(arr, arr + size);
}
int main() {
    int size; // 数组大小
    cout << "请输入数组大小：";
    cin >> size;
    // 动态创建数组
    int* arr = new int[size];
    if (arr == nullptr) {
        cout << "内存分配失败！" << endl;
        return 1;
    }
    // 输入数组元素
    cout << "请输入数组元素：" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // 排序数组
    sortArray(arr, size);
    // 输出数组元素
    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // 释放数组内存
    delete[] arr;
    return 0;
}