#include<iostream>
using namespace std;

// ������Ϊ�������ݣ��βλ�����ʵ��
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// ������Ϊ��������ֵ
int& fun() {
	static int a = 0;
	return a;
}

void printValue(const int& v) {
	cout << v << endl;
}

int main() {
	int a = 0;
	// ��������(�﷨����������& ����=ԭ��)�����ʾ���ָ�볣��
	// ���ñ����ʼ������֮�󲻿ɸ���
	int& b = a;
	// a,b����Ӧͬһ���ڴ��ַ
	b = 10;
	cout << a << endl;
	a = 100;
	cout << b << endl;

	int c = 20, d = 30;
	swap(c, d);
	cout << c << endl;
	cout << d << endl;

	// ���ý��պ���ֵ
	int& ref = fun();
	// �����ķ���ֵ�����ÿ�����Ϊ��ֵ
	fun() = 100;
	cout << ref << endl;

	int t = 10;
	// �������ã�������ʵ������int temp=10;int&p=temp��ֵ�����޸�
	const int& p = 10;

	int v = 10;
	printValue(v);
	return 0;
}