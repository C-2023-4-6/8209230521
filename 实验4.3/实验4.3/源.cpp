#include <iostream>
#include <vector>
int main() {
    // 初始化一个100个布尔型元素的数组，所有元素都是false，代表所有的存物柜都是关闭的
    std::vector<bool> lockers(100, false);
    // 计算学生应该从哪个存物柜开始
    int start = 1;
    for (int i = 1; i < 100; i += 2) {
        // 如果学生应该关闭存物柜，那么就将对应的存物柜状态设为true
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
    // 输出所有开着的存物柜的编号
    for (int i = 0; i < lockers.size(); i++) {
        if (lockers[i]) {
            std::cout << i + 1 << " ";  // +1是因为我们的编号是从1开始的
        }
    }
    return 0;
}