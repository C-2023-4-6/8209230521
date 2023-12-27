#include<iostream>
using namespace std;
class Time   // 定义Time类
{
private:    // 数据成员为私有的
    int hour;
    int minute;
    int sec;
public:  // 成员函数为公用的
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        sec = s;
    }
    void displayTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};
int main() {
    Time tl;   //定义t1为Time类对象
    //cin>>t1.hour; //输入设定的时间 
    //cin>>t1.minute;
    //cin>>t1.sec;
    tl.setTime(10, 30, 45);  // 调用成员函数设置时间
    tl.displayTime();  // 调用成员函数显示时间
    return 0;
}
