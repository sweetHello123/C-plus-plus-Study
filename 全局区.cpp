#include<iostream>
using namespace std;

// 定义全局变量
int g_a = 0;

// 定义全局常量
const int c_g_a = 0;

int main() {
	// 定义局部变量a、b
	int a = 0;
	cout << "局部变量a的地址：" << (int)&a << endl;

	// 定义局部常量
	const int c_a = 0;
	cout << "局部常量c_a的地址：" << (int)&c_a << endl;


	cout << "全局变量g_a的地址：" << (int)&g_a << endl;

	// 定义静态局部变量
	static int s_a = 0;
	cout << "静态变量s_a的地址：" << (int)&s_a << endl;

	cout << "全局常量c_g_a的地址：" << (int)&c_g_a << endl;

	cout << "字符串常量的地址：" << (int)&"hello" << endl;

}