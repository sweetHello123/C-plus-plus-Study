#include<iostream>
using namespace std;

void fd() {
	// �����ȸ�����
	float f1 = 3.14f;

	// ˫���ȸ�����
	double d1 = 3.14;

	// ��ѧ������
	float f2 = 3e2;

	cout << f1 << endl;
	cout << d1 << endl;
	cout << f2 << endl;
}

void str() {
	// C����ַ���
	char ch[] = "hello";

	// C++����ַ���
	string str = "world";

	cout << ch << endl;
	cout << str << endl;
}

void bf() {
	// ��������
	bool b1 = true;
	bool b2 = false;

	// ���1��0
	cout << b1 << endl;
	cout << b2 << endl;
	cout << sizeof(bool) << endl;
}

void in() {
	int a;
	cout << "������һ������" << endl;
	cin >> a;
	cout << "�����������"<<a << endl;

	string s;
	cout << "������һ���ַ���" << endl;
	cin >> s;
	cout << "������ַ�����" << s << endl;
}

int main()
{
	short num1 = 1;
	int num2 = 1;
	long num3 = 100;
	long long num4 = 100;

	// ͳ������������ռ���ڴ��С:sizeof(����/��������)
	cout << sizeof(short) << endl;
	cout << sizeof(num2) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(num4) << endl;
	fd();
	str();
	bf();
	in();
	return 0;
}