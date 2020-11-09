#include<iostream>
using namespace std;

void nine_nine() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "x" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}
}

int main() {
	float f1 = 5.2f;
	float f2 = 3.0f;
	cout << f1 / f2 << endl;

	int a = 0;
	cout << a++ << endl;
	cout << ++a << endl;

	int b1 = 10;
	int b2 = b1++ * 10;
	cout << "b1=" << b1 << endl;
	cout << "b2=" << b2 << endl;

	int c1 = 10;
	int c2 = ++c1 * 10;
	cout << "c1=" << c1 << endl;
	cout << "22=" << c2 << endl;
	cout << "输出9x9乘法表" << endl;
	nine_nine();
	return 0;
}