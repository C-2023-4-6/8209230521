#ifndef STUDENT_H
#define STUDENT_H
class Student //类声明
{
public:
    // 成员函数原型声明
    void display();
    void set_value(int num, char* name, char sex); // 增加一个用于设置值的成员函数private:
    int num;
    char name[20];
    char sex;
};
#endif // STUDENT_H