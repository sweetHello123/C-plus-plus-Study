#include<iostream>
using namespace std;

int main() {
	// һά����
	int arr[] = { 1,2,3,4,5 };
	// �����׵�ַ
	cout << arr << endl;

	// ���鳤��
	cout << sizeof(arr) / sizeof(arr[0]) << endl;

	// ��һ��Ԫ�ص�ַ
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;

	// ����ռ�ڴ��С
	cout << sizeof(arr) << endl;

	// ��ά����
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