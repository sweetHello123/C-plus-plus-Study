#include<iostream>
using namespace std;

int main() {
	int arr[] = { 0,1,2,3,4,5 };
	// ָ��ָ�������׵�ַ
	int* p = arr;
	// ����ָ���������
	for (int i = 0; i < 6; i++) {
		cout << *p << endl;
		p++;
	}
	return 0;
}