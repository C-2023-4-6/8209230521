#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2, result;

    cout << "�������������+ - * / %����";
    cin >> op;

    cout << "�������������֣�";
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
            cout << "���󣺳�������Ϊ0��" << endl;
            return 0;
        }
        else {
            result = num1 / num2;
        }
        break;
    case '%':
        if ((int)num2 == 0) {
            cout << "���󣺳�������Ϊ0��" << endl;
            return 0;
        }
        else {
            result = (int)num1 % (int)num2;
        }
        break;
    default:
        cout << "���󣺲�֧�ָ��������" << endl;
        return 0;
    }

    cout << "���Ϊ��" << result << endl;
    return 0;
}