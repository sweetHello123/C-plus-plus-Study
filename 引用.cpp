#include<iostream>
using namespace std;

// 引用作为参数传递，形参会修饰实参
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 引用作为函数返回值
int& fun() {
	static int a = 0;
	return a;
}

void printValue(const int& v) {
	cout << v << endl;
}

int main() {
	int a = 0;
	// 创建引用(语法：数据类型& 别名=原名)，本质就是指针常量
	// 引用必须初始化，且之后不可更改
	int& b = a;
	// a,b都对应同一块内存地址
	b = 10;
	cout << a << endl;
	a = 100;
	cout << b << endl;

	int c = 20, d = 30;
	swap(c, d);
	cout << c << endl;
	cout << d << endl;

	// 引用接收函数值
	int& ref = fun();
	// 函数的返回值是引用可以作为左值
	fun() = 100;
	cout << ref << endl;

	int t = 10;
	// 常量引用，编译器实际做了int temp=10;int&p=temp，值不可修改
	const int& p = 10;

	int v = 10;
	printValue(v);
	return 0;
}