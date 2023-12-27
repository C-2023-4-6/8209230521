#include <iostream>
#include "student.h" // 包含头文件// 在类外定义display类函数
void Student::display() 
{
std::cout << "num：" << num << std::endl;
std::cout << "name：" << name << std::endl;
std::cout << "sex：" << sex << std::endl;
}
// 在类外定义set_value类函数，用于设置数据成员的初值
void Student::set_value(int num, char* name, char sex) 
{
    this->num = num; // 设置num的初值
    std::strcpy(this->name, name); // 设置name的初值
    this->sex = sex; // 设置sex的初值
}