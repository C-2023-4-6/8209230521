#include<iostream>
using namespace std;
class Time   // ����Time��
{
private:    // ���ݳ�ԱΪ˽�е�
    int hour;
    int minute;
    int sec;
public:  // ��Ա����Ϊ���õ�
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
    Time tl;   //����t1ΪTime�����
    //cin>>t1.hour; //�����趨��ʱ�� 
    //cin>>t1.minute;
    //cin>>t1.sec;
    tl.setTime(10, 30, 45);  // ���ó�Ա��������ʱ��
    tl.displayTime();  // ���ó�Ա������ʾʱ��
    return 0;
}
