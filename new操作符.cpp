#include<iostream>
using namespace std;

int* func() {
	// new返回的数据类型的指针
	int* p = new int(0);
	return p;
}

void func2() {
	// 在堆中创建一个int型的数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	// 释放数组要加[]
	delete[] arr;
}

void print() {
	int* p = func();
	// 堆中的数据由程序员管理开辟和释放，如果想释放利用关键字delete
	cout << *p << endl;
	cout << *p << endl;
	delete p;
}

int main() {
	print();
	return 0;
}