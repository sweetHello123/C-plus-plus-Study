#include<iostream>
using namespace std;

int* func() {
	// new���ص��������͵�ָ��
	int* p = new int(0);
	return p;
}

void func2() {
	// �ڶ��д���һ��int�͵�����
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	// �ͷ�����Ҫ��[]
	delete[] arr;
}

void print() {
	int* p = func();
	// ���е������ɳ���Ա�����ٺ��ͷţ�������ͷ����ùؼ���delete
	cout << *p << endl;
	cout << *p << endl;
	delete p;
}

int main() {
	print();
	return 0;
}