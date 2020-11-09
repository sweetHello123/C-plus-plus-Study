#include<iostream>
using namespace std;

int main() {
	// 一维数组
	int arr[] = { 1,2,3,4,5 };
	// 数组首地址
	cout << arr << endl;

	// 数组长度
	cout << sizeof(arr) / sizeof(arr[0]) << endl;

	// 第一个元素地址
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;

	// 数组占内存大小
	cout << sizeof(arr) << endl;

	// 二维数组
	int arr2[2][3];
	arr2[0][0] = 1;
	
	int arr3[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	int arr4[][3] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j];
		}
		cout << endl;
	}
}