#include<iostream>
using namespace std;

struct Student {
	string name;
	int age;
};

// const���κ����޸�stu�е�����ֵ
void printStu(const Student* stu) {
	cout << stu->age<< "\t" << stu->name;
}

int main() {
	Student stu;
	stu.name = "С��";
	stu.age = 20;
	printStu(&stu);
}