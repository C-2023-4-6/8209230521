#ifndef STUDENT_H
#define STUDENT_H
class Student //������
{
public:
    // ��Ա����ԭ������
    void display();
    void set_value(int num, char* name, char sex); // ����һ����������ֵ�ĳ�Ա����private:
    int num;
    char name[20];
    char sex;
};
#endif // STUDENT_H