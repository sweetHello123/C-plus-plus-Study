#include<iostream>
using namespace std;

int main() {
	int a = 0;

	// ����ָ��
	int* p;

	// ��ָ���¼����a�ĵ�ַ
	p = &a;

	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "ָ��p��" << p << endl;

	// ָ����ռ�ڴ��С(32λϵͳ����ռ4���ֽڣ�64λϵͳռ8���ֽ�)
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(char*) << endl;

	// ʹ��ָ�룬����ͨ��������(��*)�ķ�ʽ���ҵ�ָ��ָ����ڴ�����
	*p = 1000;
	cout << a << endl;
	cout << *p << endl;
	return 0;
}