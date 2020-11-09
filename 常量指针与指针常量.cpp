#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 0;

	// 常量指针(指向的值不能改，指向的地址可以改)
	const int* p = &a;
	p = &b;
	cout << *p << endl;

	// 指针常量(指向的地址不能改，指向的值可以改)
	int* const t = &b;
	*t = 20;
	cout << *t << endl;

	// const既修饰指针又修饰常量(地址和值都不能改)
	const int* const s = &a;
	return 0;
}