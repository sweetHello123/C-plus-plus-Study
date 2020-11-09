#include<iostream>
using namespace std;

int main() {
	int a = 0;

	// 定义指针
	int* p;

	// 让指针记录变量a的地址
	p = &a;

	cout << "a的地址：" << &a << endl;
	cout << "指针p：" << p << endl;

	// 指针所占内存大小(32位系统都是占4个字节，64位系统占8个字节)
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(char*) << endl;

	// 使用指针，可以通过解引用(加*)的方式来找到指针指向的内存数据
	*p = 1000;
	cout << a << endl;
	cout << *p << endl;
	return 0;
}