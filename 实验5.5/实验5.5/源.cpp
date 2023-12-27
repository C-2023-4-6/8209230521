#include <iostream>
class Point {
private:
    int x;
    int y;
public:
    // 构造函数，用于初始化点的坐标为(60, 80)
    Point() : x(60), y(80) {}
    // 公有成员函数，用于修改点的坐标值
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    // 公有成员函数，用于输出修改后的坐标值
    void display() {
        std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};
int main() {
    // 定义一个Point对象并验证各个函数
    Point p;
    p.display();  // 输出初始坐标 (60, 80)
    p.setPoint(5, 7);  // 将坐标修改为 (65, 87)
    p.display();  // 输出修改后的坐标 (65, 87)
    return 0;
}