#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "请输入三条边长度：" << endl;
	cin >> a >> b >> c;
	//判断是否为三角形
	if (a + b > c && a + c > b && b + c > a) {
		//计算周长
		int perimeter = a + b + c;
		//判断是否为等腰三角形
		if (a == b || b == c || a == c) {
			cout << "是等腰三角形，周长为：" << perimeter << endl;
		}
		else {
			cout << "不是等腰三角形，周长为：" << perimeter << endl;
		}
	}
	else {
		cout << "不是三角形" << endl;
	}
	return 0;
}
