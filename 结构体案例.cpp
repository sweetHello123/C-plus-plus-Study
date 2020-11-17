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
		cout << "老师的姓名：" << t[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t学生的姓名：" << t[i].stuArr[j].sname << endl;
		}
	}
}

int main() {

	// 1.创建3名老师的数组
	Teacher t[3];

	// 2.通过函数给3名老师的信息赋值，并给老师带的学生赋值
	int len = sizeof(t) / sizeof(t[0]);

	// 3.打印所有老师和学生的信息
	allocate(t, len);
	printInfo(t, len);
}