#include<iostream>
using namespace std;

// 定义学生结构体
struct Student {
	int id;
	string name;
	int age;
};

// 定义老师结构体
struct Teacher
{
	int id;
	string name;
	int age;
	Student stu;
};

int main() {
	Teacher t;
	t.id = 0001;
	t.name = "老张";
	t.age = 30;
	t.stu.id = 01;
	t.stu.name = "小王";
	t.stu.age = 12;

	cout << "学生姓名：" << t.stu.name << endl;
	return 0;
}