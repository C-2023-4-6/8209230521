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
    cout << "�ܹ������� " << days << " ��" << endl;
    cout << "ÿ��ƽ������ " << money << " Ԫ" << endl;
    return 0;
}