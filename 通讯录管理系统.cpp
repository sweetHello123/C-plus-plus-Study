#include<iostream>
using namespace std;
#define MAX 1000

// 联系人结构体
struct Person {
	string name;

	int sex;

	int age;

	string phone;

	string address;
};

// 通讯录结构体
struct AddressBook  {

	struct Person p[MAX];

	int size;
};

void showMenu() {
	cout << "**********************" << endl;
	cout << "*****1.添加联系人*****" << endl;
	cout << "*****2.显示联系人*****" << endl;
	cout << "*****3.删除联系人*****" << endl;
	cout << "*****4.查找联系人*****" << endl;
	cout << "*****5.修改联系人*****" << endl;
	cout << "*****6.清空联系人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
}

// 1.添加联系人
void addPerson(AddressBook* book) {
	if (book->size == MAX) {
		cout << "通讯录已满" << endl;
		return;
	}
	else {
		// 添加姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		book->p[book->size].name = name;

		// 添加性别
		int sex = 0;
		cout << "请输入性别(0代表男,1代表女)：" << endl;
		while (true) {
			cin >> sex;
			if (sex == 0 || sex == 1) {
				book->p[book->size].sex = sex;
			}
			break;
		}

		// 添加年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		book->p[book->size].age = age;

		// 添加手机号
		string phone;
		cout << "请输入手机号：" << endl;
		cin >> phone;
		book->p[book->size].phone = phone;

		// 添加家庭住址
		string address;
		cout << "请输入家庭地址：" << endl;
		cin >> address;
		book->p[book->size].address = address;

		// 容量加1
		book->size++;
		cout << "添加成功" << endl;

		// 按任意键继续
		system("pause");
		// 清屏
		system("cls");
	}
}

// 2.显示联系人
void showPerson(AddressBook* book) {
	if (book->size == 0) {
		cout << "通讯录为空" << endl;
	}else
	{
		for (int i = 0; i < book->size; i++) {
			cout << "姓名：" << book->p[i].name << "\t";
			cout << "性别：" << (book->p[i].sex == 0 ? "男" : "女") << "\t";
			cout << "年龄：" << book->p[i].age << "\t";
			cout << "手机号：" << book->p[i].phone << "\t";
			cout << "地址：" << book->p[i].address << "\t" << endl;
		}
	}

	// 按任意键继续
	system("pause");
	// 清屏
	system("cls");
}

// 检查联系人是否存在
int isExist(AddressBook* book, string name) {
	for (int i = 0; i < book->size; i++) {
		if (book->p[i].name == name) {
			return i;
		}
	}
	return -1;
}

// 3.删除指定联系人
void deletePerson(AddressBook* book) {
	string name;
	cout << "请输入要删除的联系人：" << endl;
	cin >> name;
	int index = isExist(book, name);
	if (index != -1) {
		for (int i = index; i < book->size; i++) {
			book->p[i] = book->p[i + 1];
		}
		book->size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "联系人不存在" << endl;
	}

	// 按任意键继续
	system("pause");
	// 清屏
	system("cls");
}

// 4.查找联系人
void findPerson(AddressBook* book) {
	string name;
	cout << "请输入要查找的联系人：" << endl;
	cin >> name;
	int index = isExist(book, name);
	if (index != -1) {
		cout << "姓名：" << book->p[index].name << "\t";
		cout << "性别：" << (book->p[index].sex == 0 ? "男" : "女") << "\t";
		cout << "年龄：" << book->p[index].age << "\t";
		cout << "手机号：" << book->p[index].phone << "\t";
		cout << "地址：" << book->p[index].address << "\t" << endl;
	}
	else {
		cout << "联系人不存在" << endl;
	}

	// 按任意键继续
	system("pause");
	// 清屏
	system("cls");
}

// 5.修改联系人
void updatePerson(AddressBook* book) {
	string name;
	cout << "请输入要修改的联系人：" << endl;
	cin >> name;
	int index = isExist(book, name);
	if (index != -1) {
		// 添加姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		book->p[index].name = name;

		// 添加性别
		int sex = 0;
		cout << "请输入性别(0代表男,1代表女)：" << endl;
		while (true) {
			cin >> sex;
			if (sex == 0 || sex == 1) {
				book->p[index].sex = sex;
			}
			break;
		}

		// 添加年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		book->p[index].age = age;

		// 添加手机号
		string phone;
		cout << "请输入手机号：" << endl;
		cin >> phone;
		book->p[index].phone = phone;

		// 添加家庭住址
		string address;
		cout << "请输入家庭地址：" << endl;
		cin >> address;
		book->p[index].address = address;
	}
	else {
		cout << "联系人不存在" << endl;
	}

	// 按任意键继续
	system("pause");
	// 清屏
	system("cls");
}

// 6.清空联系人
void clearPerson(AddressBook* book) {
	book->size = 0;
	cout << "清空成功" << endl;

	// 按任意键继续
	system("pause");
	// 清屏
	system("cls");
}

int main() {
	AddressBook book;
	book.size = 0;

	while (true) {
		showMenu();
		int select = 0;
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&book);
			break;
		case 2:
			showPerson(&book);
			break;
		case 3:
			deletePerson(&book);
			break;
		case 4:
			findPerson(&book);
			break;
		case 5:
			updatePerson(&book);
			break;
		case 6:
			clearPerson(&book);
			break;
		case 0:
			cout << "退出系统" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}