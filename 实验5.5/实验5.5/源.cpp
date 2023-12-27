#include <iostream>
class Point {
private:
    int x;
    int y;
public:
    // ���캯�������ڳ�ʼ���������Ϊ(60, 80)
    Point() : x(60), y(80) {}
    // ���г�Ա�����������޸ĵ������ֵ
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    // ���г�Ա��������������޸ĺ������ֵ
    void display() {
        std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};
int main() {
    // ����һ��Point������֤��������
    Point p;
    p.display();  // �����ʼ���� (60, 80)
    p.setPoint(5, 7);  // �������޸�Ϊ (65, 87)
    p.display();  // ����޸ĺ������ (65, 87)
    return 0;
}