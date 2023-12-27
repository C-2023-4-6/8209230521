#include <iostream>
#include "student.h" // 包含头文件
int main() 
{
Student stud; // 定义对象
Student stud1(007, "tcg", 'm'); // 定义并初始化对象stud1
stud.set_value(100, "Tom", 'm'); // 使用set_value函数设置stud对象的初值
stud.display(); // 执行stud对象的display函数
stud1.display(); // 执行stud1对象的display函数，显示初始化时的值和修改后的值
return 0;
}