#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 0;

	// ����ָ��(ָ���ֵ���ܸģ�ָ��ĵ�ַ���Ը�)
	const int* p = &a;
	p = &b;
	cout << *p << endl;

	// ָ�볣��(ָ��ĵ�ַ���ܸģ�ָ���ֵ���Ը�)
	int* const t = &b;
	*t = 20;
	cout << *t << endl;

	// const������ָ�������γ���(��ַ��ֵ�����ܸ�)
	const int* const s = &a;
	return 0;
}