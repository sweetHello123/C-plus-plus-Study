#include<iostream>
using namespace std;

struct Student 
{
	string sname;
};

struct Teacher
{
	string tname;
	Student stuArr[5];
};

void allocate(Teacher tArr[],int len) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArr[i].tname = "Teacher_";
		tArr[i].tname += nameSeed[i];
		for (int j = 0; j < 5; j++) {
			tArr[i].stuArr[j].sname = "Student_";
			tArr[i].stuArr[j].sname += nameSeed[j];
		}
	}
}

void printInfo(Teacher t[],int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ��������" << t[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tѧ����������" << t[i].stuArr[j].sname << endl;
		}
	}
}

int main() {

	// 1.����3����ʦ������
	Teacher t[3];

	// 2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
	int len = sizeof(t) / sizeof(t[0]);

	// 3.��ӡ������ʦ��ѧ������Ϣ
	allocate(t, len);
	printInfo(t, len);
}