#include<iostream>
using namespace std;

// 引用作为函数重载
void fun(int& a) {
	cout << "调用fun(int& a)" << endl;
}

void fun(const int& a) {
	cout << "调用fun(const int& a)" << endl;
}

int main() {
	int a = 0;
	fun(a);
	fun(10);
	return 0;
}