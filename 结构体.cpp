#include<iostream>
using namespace std;

// 定义结构体类型
struct Student
{
	// 成员列表
	string name;

	int age;

	int score;
}s3;

int main() 
{
	/*
	创建一个结构体变量的3种方式
	*/

	// 1.先定义后赋值
	Student s1;
	s1.name = "张三";
	s1.score = 100;
	s1.age = 20;
	cout << "姓名：" << s1.name << endl;
	cout << "分数：" << s1.score<< endl;
	cout << "年龄：" << s1.age << endl;
	cout << "----------" << endl;

	// 2.定义并赋值
	Student s2 = { "李四",90,18 };
	cout << "姓名：" << s2.name << endl;
	cout << "分数：" << s2.score << endl;
	cout << "年龄：" << s2.age << endl;
	cout << "----------" << endl;

	// 3.创建结构体时在尾部加一个变量
	s3.name = "王五";
	s3.score = 99;
	s3.age = 19;
	cout << "姓名：" << s3.name << endl;
	cout << "分数：" << s3.score << endl;
	cout << "年龄：" << s3.age << endl;

	// 创建结构体数组并赋值
	Student arr[3] = {
		{"A",80,23},
		{"B",90,26},
		{"D",70,19}
	};
	arr[2].name = "D";
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << arr[i].name << " "
			<< "分数：" << arr[i].score << " "
			<< "年龄：" << arr[i].age << endl;
	}
	cout << "----------" << endl;

	Student stu = { "学生甲",99,16 };
	// 通过指针指向结构体变量
	Student* p = &stu;
	// 利用->访问属性
	cout << p->name << endl;
	cout << p->score << endl;
	cout << p->age << endl;
	return 0;
}