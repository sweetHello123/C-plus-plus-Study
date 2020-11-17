#include<iostream>
using namespace std;
#define MAX 1000

// ��ϵ�˽ṹ��
struct Person {
	string name;

	int sex;

	int age;

	string phone;

	string address;
};

// ͨѶ¼�ṹ��
struct AddressBook  {

	struct Person p[MAX];

	int size;
};

void showMenu() {
	cout << "**********************" << endl;
	cout << "*****1.�����ϵ��*****" << endl;
	cout << "*****2.��ʾ��ϵ��*****" << endl;
	cout << "*****3.ɾ����ϵ��*****" << endl;
	cout << "*****4.������ϵ��*****" << endl;
	cout << "*****5.�޸���ϵ��*****" << endl;
	cout << "*****6.�����ϵ��*****" << endl;
	cout << "*****0.�˳�ͨѶ¼*****" << endl;
}

// 1.�����ϵ��
void addPerson(AddressBook* book) {
	if (book->size == MAX) {
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else {
		// �������
		string name;
		cout << "������������" << endl;
		cin >> name;
		book->p[book->size].name = name;

		// ����Ա�
		int sex = 0;
		cout << "�������Ա�(0������,1����Ů)��" << endl;
		while (true) {
			cin >> sex;
			if (sex == 0 || sex == 1) {
				book->p[book->size].sex = sex;
			}
			break;
		}

		// �������
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		book->p[book->size].age = age;

		// ����ֻ���
		string phone;
		cout << "�������ֻ��ţ�" << endl;
		cin >> phone;
		book->p[book->size].phone = phone;

		// ��Ӽ�ͥסַ
		string address;
		cout << "�������ͥ��ַ��" << endl;
		cin >> address;
		book->p[book->size].address = address;

		// ������1
		book->size++;
		cout << "��ӳɹ�" << endl;

		// �����������
		system("pause");
		// ����
		system("cls");
	}
}

// 2.��ʾ��ϵ��
void showPerson(AddressBook* book) {
	if (book->size == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;
	}else
	{
		for (int i = 0; i < book->size; i++) {
			cout << "������" << book->p[i].name << "\t";
			cout << "�Ա�" << (book->p[i].sex == 0 ? "��" : "Ů") << "\t";
			cout << "���䣺" << book->p[i].age << "\t";
			cout << "�ֻ��ţ�" << book->p[i].phone << "\t";
			cout << "��ַ��" << book->p[i].address << "\t" << endl;
		}
	}

	// �����������
	system("pause");
	// ����
	system("cls");
}

// �����ϵ���Ƿ����
int isExist(AddressBook* book, string name) {
	for (int i = 0; i < book->size; i++) {
		if (book->p[i].name == name) {
			return i;
		}
	}
	return -1;
}

// 3.ɾ��ָ����ϵ��
void deletePerson(AddressBook* book) {
	string name;
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	cin >> name;
	int index = isExist(book, name);
	if (index != -1) {
		for (int i = index; i < book->size; i++) {
			book->p[i] = book->p[i + 1];
		}
		book->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "��ϵ�˲�����" << endl;
	}

	// �����������
	system("pause");
	// ����
	system("cls");
}

// 4.������ϵ��
void findPerson(AddressBook* book) {
	string name;
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
	cin >> name;
	int index = isExist(book, name);
	if (index != -1) {
		cout << "������" << book->p[index].name << "\t";
		cout << "�Ա�" << (book->p[index].sex == 0 ? "��" : "Ů") << "\t";
		cout << "���䣺" << book->p[index].age << "\t";
		cout << "�ֻ��ţ�" << book->p[index].phone << "\t";
		cout << "��ַ��" << book->p[index].address << "\t" << endl;
	}
	else {
		cout << "��ϵ�˲�����" << endl;
	}

	// �����������
	system("pause");
	// ����
	system("cls");
}

// 5.�޸���ϵ��
void updatePerson(AddressBook* book) {
	string name;
	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	cin >> name;
	int index = isExist(book, name);
	if (index != -1) {
		// �������
		string name;
		cout << "������������" << endl;
		cin >> name;
		book->p[index].name = name;

		// ����Ա�
		int sex = 0;
		cout << "�������Ա�(0������,1����Ů)��" << endl;
		while (true) {
			cin >> sex;
			if (sex == 0 || sex == 1) {
				book->p[index].sex = sex;
			}
			break;
		}

		// �������
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		book->p[index].age = age;

		// ����ֻ���
		string phone;
		cout << "�������ֻ��ţ�" << endl;
		cin >> phone;
		book->p[index].phone = phone;

		// ��Ӽ�ͥסַ
		string address;
		cout << "�������ͥ��ַ��" << endl;
		cin >> address;
		book->p[index].address = address;
	}
	else {
		cout << "��ϵ�˲�����" << endl;
	}

	// �����������
	system("pause");
	// ����
	system("cls");
}

// 6.�����ϵ��
void clearPerson(AddressBook* book) {
	book->size = 0;
	cout << "��ճɹ�" << endl;

	// �����������
	system("pause");
	// ����
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
			cout << "�˳�ϵͳ" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}