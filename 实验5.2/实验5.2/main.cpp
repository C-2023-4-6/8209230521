#include <iostream>
#include "student.h" // ����ͷ�ļ�
int main() 
{
Student stud; // �������
Student stud1(007, "tcg", 'm'); // ���岢��ʼ������stud1
stud.set_value(100, "Tom", 'm'); // ʹ��set_value��������stud����ĳ�ֵ
stud.display(); // ִ��stud�����display����
stud1.display(); // ִ��stud1�����display��������ʾ��ʼ��ʱ��ֵ���޸ĺ��ֵ
return 0;
}