#include<iostream>
using namespace std;

// ������Ϊ��������
void fun(int& a) {
	cout << "����fun(int& a)" << endl;
}

void fun(const int& a) {
	cout << "����fun(const int& a)" << endl;
}

int main() {
	int a = 0;
	fun(a);
	fun(10);
	return 0;
}