#include <iostream>
using namespace std;
int main() {
    double price = 0.8, money = 0, days = 1;
    int apples = 2;
    while (apples <= 100) {
        money += price * apples;
        apples *= 2;
        days++;
    }
    money /= days;
    cout << "总共购买了 " << days << " 天" << endl;
    cout << "每天平均花费 " << money << " 元" << endl;
    return 0;
}