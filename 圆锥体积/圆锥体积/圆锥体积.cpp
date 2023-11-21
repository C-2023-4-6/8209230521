//圆锥体积.cpp:此文件包含“main”函数，程序执行将在此处开始并结束。
//
#include<iostream>
using namespace std;
int main()
{
#define c 3.14159265
	int r = 0;
	int h = 0;
	float v = 0;
	cout << "请输入圆锥体的半径" << endl;
	cin >>r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
    v = c*r* r* h / 3;
	cout << v << endl;
}
