#include<iostream>
using namespace std;

void fd() {
	// 单精度浮点型
	float f1 = 3.14f;

	// 双精度浮点型
	double d1 = 3.14;

	// 科学计数法
	float f2 = 3e2;

	cout << f1 << endl;
	cout << d1 << endl;
	cout << f2 << endl;
}

void str() {
	// C风格字符串
	char ch[] = "hello";

	// C++风格字符串
	string str = "world";

	cout << ch << endl;
	cout << str << endl;
}

void bf() {
	// 布尔类型
	bool b1 = true;
	bool b2 = false;

	// 输出1和0
	cout << b1 << endl;
	cout << b2 << endl;
	cout << sizeof(bool) << endl;
}

void in() {
	int a;
	cout << "请输入一个整数" << endl;
	cin >> a;
	cout << "输入的整数："<<a << endl;

	string s;
	cout << "请输入一个字符串" << endl;
	cin >> s;
	cout << "输入的字符串：" << s << endl;
}

int main()
{
	short num1 = 1;
	int num2 = 1;
	long num3 = 100;
	long long num4 = 100;

	// 统计数据类型所占的内存大小:sizeof(变量/数据类型)
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