#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct book
{
	string name;
	string avthor;
	int year;
	int feedb;
};
string knigi[]{ "����� � ���","̸����� ����", "���� �����-������","��� ��������" };
string author[]{ "�.�.�������","�.�.������", "��������� ����","��������� ����" };

void shapzap(book ar[]) {//4
	
	const int size = 4;
	for (int i = 0; i < size; i++) {
		ar[i].name = knigi[i];
		ar[i].avthor = author[i];
		ar[i].year = rand();
		ar[i].feedb = 0;
	}
} // ���������� �� ���������

void vivid(book ar[]) {
	const int size = 4;
	cout << "\n������ ����:\n" << endl;

	for (int i = 0; i < size; i++) {
		cout << "|������������: " << i << " | " << ar[i].name << endl;
		cout << "|�����: " << ar[i].avthor << endl;
		cout << "|���: " << ar[i].year << endl;
		cout << "|������ ���������: " << ar[i].feedb << "\n" << endl;
	}
} // ����� ������� book.

void dinpam() {
	string zapr;
	vector<book> myArray;
	while (true) {
		book data;

		std::cout << "Enter string 1: ";
		std::cin >> data.name;

		std::cout << "Enter string 2: ";
		std::cin >> data.avthor;

		std::cout << "Enter integer 1: ";
		std::cin >> data.year;

		std::cout << "Enter integer 2: ";
		std::cin >> data.feedb;

		myArray.push_back(data);
		
		cout << "����������?" << endl;
		cin >> zapr;
		
		if (zapr == "1") {break;
		}
	}

	for (int i = 0; i < myArray.size(); i++) {
		cout << "|������������: " << i << " | " << myArray[i].name << endl;
		cout << "|�����: " << myArray[i].avthor << endl;
		cout << "|���: " << myArray[i].year << endl;
		cout << "|������ ���������: " << myArray[i].feedb << "\n" << endl;
	}
} // ���������� ������������� ������� vector �� ��������� book � ����� ��� �����������.

void main() {
	setlocale(LC_ALL, "Russian");

	string login;
	string password;
	int command;
	struct book* b;

	book ar[4];
	shapzap(ar);

	cout << "���������� � ���������:\n ���� ����������������: C++\n �������� ������ ���������: \n ������� ��������� book,������� �������� ��� ��������� ��������� ������ � ���� ������� �������.\n ��� �������������� ����� ������������ ������ ������ ����� � ������, \n������� ����������� � �������� ��������� if � ������ ���� true � ����� ����������. \n ����� �������� ����� ����������� ������� vhod, \n������� ����������� � ������������ id ����� � ����� �� ��� �����. \n � ����� ������������ ������������ ����������� ������� � ������� � ������.\n ����� ���������: " << &b << endl;

	vivid(ar);

	while (true)
	{
		cout << "Login" << endl;
		cin >> login;
		cout << "Pass" << endl;
		cin >> password;

		if ((login == "admin" && password == "1234") || (login == "ad" && password == "1")) {
			cout << "������� ������: \n1 - �������� �����; \n2 - ������� �����." << endl;
			cin >> command;
			switch (command)
			{
			case 1:
				dinpam();
				break;
			default:
				break;
			}
			break;
		}
		else
		{
			cout << "Result:0" << endl;
		}
	}

}
//#include <iostream>
//#include <string>
//using namespace std; // ����� ���������� � ������������ ���� std ��� ������������ std (using std::endl;using std::cout;using std::cin;)
//// ����������� � ������������ ����������
//
//
//struct book
//{
//	string name;
//	string avthor;
//	int year;
//	int feedb;
//};
//
//string knigi[]{ "����� � ���","̸����� ����", "���� �����-������","��� ��������"};
//string author[]{ "�.�.�������","�.�.������", "��������� ����","��������� ����"};
//void ocen() {
//	enum dm { badlu, madium, good, excellent }; // ������ ������������, ��� ������� ������� ������� �������� i+1 (0,1,2,3)
//	const int size = 4;
//	book ar[size];
//	int idbook;
//	int feedback;
//
//	cout << "������� id �����" << endl;
//	cin >> idbook;
//	if (idbook != NULL) {
//		cout << "������� ���� ������ ���� �����" << endl;
//		cin >> feedback;
//		switch (feedback) {
//		case badlu:
//			ar[idbook].feedb = badlu;
//			break;
//		case madium:
//			ar[idbook].feedb = madium;
//			break;
//		case good:
//			ar[idbook].feedb = good;
//			break;
//		case excellent:
//			ar[idbook].feedb = excellent;
//			break;
//		default:
//			cout << "������� ������������ �����." << endl;
//			break;
//		}
//	}
//}
//void vhod() {
//	
//
//	const int size = 4;
//	book ar[size];
//	
//	for (int i = 0; i < size; i++) {
//		ar[i].name = knigi[i];
//		ar[i].avthor = author[i];
//		ar[i].year = rand();
//		ar[i].feedb = 0;
//	}
//	while (true) {
//	cout << "\n������ ����:\n" << endl;
//
//	for (int i = 0; i < size; i++) {
//		cout<<"|������������: "<< i << " | " << ar[i].name << endl;
//		cout<< "|�����: " << ar[i].avthor << endl;
//		cout<< "|���: " << ar[i].year  << endl;
//		cout<< "|������ ���������: " << ar[i].feedb <<"\n"<< endl;
//	}
//	ocen();
//	/*int idbook;
//	int feedback;
//
//		cout << "������� id �����" << endl;
//		cin >> idbook;
//		if (idbook != NULL) {
//			cout << "������� ���� ������ ���� �����" << endl;
//			cin >> feedback;
//			switch (feedback) {
//			case badlu:
//				ar[idbook].feedb = badlu;
//				break;
//			case madium:
//				ar[idbook].feedb = madium;
//				break;
//			case good:
//				ar[idbook].feedb = good;
//				break;
//			case excellent:
//				ar[idbook].feedb = excellent;
//				break;
//			default:
//				cout << "������� ������������ �����." << endl;
//				break;
//			}
//		}*/
//	}
//}
//
//int main() { setlocale(LC_ALL, "Russian");
//string login;
//string password;
//
//char command;
//	struct book* b;
//	cout << "���������� � ���������:\n ���� ����������������: C++\n �������� ������ ���������: \n ������� ��������� book,������� �������� ��� ��������� ��������� ������ � ���� ������� �������.\n ��� �������������� ����� ������������ ������ ������ ����� � ������, \n������� ����������� � �������� ��������� if � ������ ���� true � ����� ����������. \n ����� �������� ����� ����������� ������� vhod, \n������� ����������� � ������������ id ����� � ����� �� ��� �����. \n � ����� ������������ ������������ ����������� ������� � ������� � ������.\n ����� ���������: "<<&b<<endl;
//	while (true)
//	{
//		cout << "Login" << endl;
//		cin >> login;
//		cout << "Pass" << endl;
//		cin >> password;
//
//		if ((login == "admin" && password == "1234") || (login == "ad" && password == "1")) {
//			cin >> command;
//			switch (command)
//			{
//			case 'a':
//				cout << ",fkekf" << endl;
//				break;
//			default:
//				break;
//			}
//			//vhod();
//			break;
//		}
//		else
//		{
//			cout << "Result:0" << endl;
//		}
//	}
//}
