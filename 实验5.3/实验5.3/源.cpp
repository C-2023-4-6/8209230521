#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
    double height;
public:
    // 构造函数，用于初始化长、宽、高
    Rectangle(double l, double w, double h) : length(l), width(w), height(h) {}
    // 成员函数，计算体积
    double volume() {
        return length * width * height;
    }
};
int main() {
    // 创建3个长方柱对象，并输入长、宽、高
    Rectangle rect1(1.0, 2.0, 3.0);
    Rectangle rect2(4.0, 5.0, 6.0);
    Rectangle rect3(7.0, 8.0, 9.0);
    // 计算并输出3个长方柱的体积
    cout << "Volume of rect1: " << rect1.volume() << endl;
    cout << "Volume of rect2: " << rect2.volume() << endl;
    cout << "Volume of rect3: " << rect3.volume() << endl;
    return 0;
}