#include <iostream>
#include "student.h" // ����ͷ�ļ�// �����ⶨ��display�ຯ��
void Student::display() 
{
std::cout << "num��" << num << std::endl;
std::cout << "name��" << name << std::endl;
std::cout << "sex��" << sex << std::endl;
}
// �����ⶨ��set_value�ຯ���������������ݳ�Ա�ĳ�ֵ
void Student::set_value(int num, char* name, char sex) 
{
    this->num = num; // ����num�ĳ�ֵ
    std::strcpy(this->name, name); // ����name�ĳ�ֵ
    this->sex = sex; // ����sex�ĳ�ֵ
}