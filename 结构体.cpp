#include<iostream>
using namespace std;

// ����ṹ������
struct Student
{
	// ��Ա�б�
	string name;

	int age;

	int score;
}s3;

int main() 
{
	/*
	����һ���ṹ�������3�ַ�ʽ
	*/

	// 1.�ȶ����ֵ
	Student s1;
	s1.name = "����";
	s1.score = 100;
	s1.age = 20;
	cout << "������" << s1.name << endl;
	cout << "������" << s1.score<< endl;
	cout << "���䣺" << s1.age << endl;
	cout << "----------" << endl;

	// 2.���岢��ֵ
	Student s2 = { "����",90,18 };
	cout << "������" << s2.name << endl;
	cout << "������" << s2.score << endl;
	cout << "���䣺" << s2.age << endl;
	cout << "----------" << endl;

	// 3.�����ṹ��ʱ��β����һ������
	s3.name = "����";
	s3.score = 99;
	s3.age = 19;
	cout << "������" << s3.name << endl;
	cout << "������" << s3.score << endl;
	cout << "���䣺" << s3.age << endl;

	// �����ṹ�����鲢��ֵ
	Student arr[3] = {
		{"A",80,23},
		{"B",90,26},
		{"D",70,19}
	};
	arr[2].name = "D";
	for (int i = 0; i < 3; i++) {
		cout << "������" << arr[i].name << " "
			<< "������" << arr[i].score << " "
			<< "���䣺" << arr[i].age << endl;
	}
	cout << "----------" << endl;

	Student stu = { "ѧ����",99,16 };
	// ͨ��ָ��ָ��ṹ�����
	Student* p = &stu;
	// ����->��������
	cout << p->name << endl;
	cout << p->score << endl;
	cout << p->age << endl;
	return 0;
}