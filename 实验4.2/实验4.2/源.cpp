#include <iostream>
using namespace std;
void bubbleSort(double arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main() {
    const int listSize = 10;
    double list[listSize];
    cout << "请输入10个数字：" << endl;
    for (int i = 0; i < listSize; i++) {
        cin >> list[i];
    }
    bubbleSort(list, listSize);
    cout << "排序后的数字：" << endl;
    for (int i = 0; i < listSize; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}