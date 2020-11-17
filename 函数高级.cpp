#include<iostream>
using namespace std;

// 默认参数(不传使用缺省值)
// 注意事项：1.如果某个位置有了默认参数值，则后面所有的参数都必须赋默认值
//           2.如果函数声明有了默认参数值，则实现不能再由默认参数值(声明和实现只能有一个默认参数)
int fun(int a, int b = 10, int c = 10) {
	return a + b + c;
}

int fun2(int a = 10, int b = 20);

int fun2(int a, int b) {
	return a + b;
}

// 占位参数
void fun3(int a, int) {
	cout << "hello" << endl;
}

int main() {
	cout << fun(20,30) << endl;
	cout << fun2() << endl;
	fun3(1, 2);
	return 0;
}