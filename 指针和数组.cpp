#include<iostream>
using namespace std;

int main() {
	int arr[] = { 0,1,2,3,4,5 };
	// 指针指向数组首地址
	int* p = arr;
	// 利用指针遍历数组
	for (int i = 0; i < 6; i++) {
		cout << *p << endl;
		p++;
	}
	return 0;
}