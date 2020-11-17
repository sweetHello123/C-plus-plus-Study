#include<iostream>
using namespace std;

struct Student {
	string name;
	int age;
};

// const修饰后不能修改stu中的属性值
void printStu(const Student* stu) {
	cout << stu->age<< "\t" << stu->name;
}

int main() {
	Student stu;
	stu.name = "小王";
	stu.age = 20;
	printStu(&stu);
}