#include<iostream>
using namespace std;

// Ĭ�ϲ���(����ʹ��ȱʡֵ)
// ע�����1.���ĳ��λ������Ĭ�ϲ���ֵ����������еĲ��������븳Ĭ��ֵ
//           2.���������������Ĭ�ϲ���ֵ����ʵ�ֲ�������Ĭ�ϲ���ֵ(������ʵ��ֻ����һ��Ĭ�ϲ���)
int fun(int a, int b = 10, int c = 10) {
	return a + b + c;
}

int fun2(int a = 10, int b = 20);

int fun2(int a, int b) {
	return a + b;
}

// ռλ����
void fun3(int a, int) {
	cout << "hello" << endl;
}

int main() {
	cout << fun(20,30) << endl;
	cout << fun2() << endl;
	fun3(1, 2);
	return 0;
}