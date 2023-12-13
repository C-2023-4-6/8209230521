#include<iostream>
using namespace std;
int totalPeach(int day) {
    if (day == 1) {
        return 1; // 第十天剩下一个桃子
    }
    else {
        return (totalPeach(day - 1) + 1) * 2; // 当前天的桃子是前一天的桃子数量加1后的两倍
    }
}
int main() {
    cout << "第一天猴子共摘了 " << totalPeach(10) << " 个桃子" << endl;
    return 0;
}