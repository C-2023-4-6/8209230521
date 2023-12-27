#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
    double height;
public:
    // ���캯�������ڳ�ʼ����������
    Rectangle(double l, double w, double h) : length(l), width(w), height(h) {}
    // ��Ա�������������
    double volume() {
        return length * width * height;
    }
};
int main() {
    // ����3�����������󣬲����볤������
    Rectangle rect1(1.0, 2.0, 3.0);
    Rectangle rect2(4.0, 5.0, 6.0);
    Rectangle rect3(7.0, 8.0, 9.0);
    // ���㲢���3�������������
    cout << "Volume of rect1: " << rect1.volume() << endl;
    cout << "Volume of rect2: " << rect2.volume() << endl;
    cout << "Volume of rect3: " << rect3.volume() << endl;
    return 0;
}