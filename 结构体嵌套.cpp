#include<iostream>
using namespace std;

// ����ѧ���ṹ��
struct Student {
	int id;
	string name;
	int age;
};

// ������ʦ�ṹ��
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
	t.name = "����";
	t.age = 30;
	t.stu.id = 01;
	t.stu.name = "С��";
	t.stu.age = 12;

	cout << "ѧ��������" << t.stu.name << endl;
	return 0;
}