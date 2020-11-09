// 引入函数头文件
#include "swap.h"

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << endl;
	cout << b << endl;
}