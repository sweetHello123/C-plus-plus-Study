#include<iostream>
using namespace std;

// ����ȫ�ֱ���
int g_a = 0;

// ����ȫ�ֳ���
const int c_g_a = 0;

int main() {
	// ����ֲ�����a��b
	int a = 0;
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;

	// ����ֲ�����
	const int c_a = 0;
	cout << "�ֲ�����c_a�ĵ�ַ��" << (int)&c_a << endl;


	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;

	// ���徲̬�ֲ�����
	static int s_a = 0;
	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;

	cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << (int)&c_g_a << endl;

	cout << "�ַ��������ĵ�ַ��" << (int)&"hello" << endl;

}