#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2, result;

    cout << "请输入运算符（+ - * / %）：";
    cin >> op;

    cout << "请输入两个数字：";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
            return 0;
        }
        else {
            result = num1 / num2;
        }
        break;
    case '%':
        if ((int)num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
            return 0;
        }
        else {
            result = (int)num1 % (int)num2;
        }
        break;
    default:
        cout << "错误：不支持该运算符！" << endl;
        return 0;
    }

    cout << "结果为：" << result << endl;
    return 0;
}