#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "�����������߳��ȣ�" << endl;
	cin >> a >> b >> c;
	//�ж��Ƿ�Ϊ������
	if (a + b > c && a + c > b && b + c > a) {
		//�����ܳ�
		int perimeter = a + b + c;
		//�ж��Ƿ�Ϊ����������
		if (a == b || b == c || a == c) {
			cout << "�ǵ��������Σ��ܳ�Ϊ��" << perimeter << endl;
		}
		else {
			cout << "���ǵ��������Σ��ܳ�Ϊ��" << perimeter << endl;
		}
	}
	else {
		cout << "����������" << endl;
	}
	return 0;
}
