#include <iostream>
#include <string>
using namespace std; // ����� ���������� � ������������ ���� std ��� ������������ std (using std::endl;using std::cout;using std::cin;)

struct book
{
	string name;
	string avthor;
	int year;
	int feedb;
};
void vhod() {enum dm { badlu, madium, good, excellent }; // ������ ������������, ��� ������� ������� ������� �������� i+1 (0,1,2,3)
	string knigi[]{ "����� � ���","̸����� ����", "���� �����-������","��� ��������"};
	string author[]{ "�.�.�������","�.�.������", "��������� ����","��������� ����"};

	const int size = 4;
	book ar[size];
	
	for (int i = 0; i < size; i++) {
		ar[i].name = knigi[i];
		ar[i].avthor = author[i];
		ar[i].year = rand();
		ar[i].feedb = 0;
	}
	while (true) {
	cout << "\n������ ����:\n" << endl;

	for (int i = 0; i < size; i++) {
		cout<<"|������������: "<< i << " | " << ar[i].name << endl;
		cout<< "|�����: " << ar[i].avthor << endl;
		cout<< "|���: " << ar[i].year  << endl;
		cout<< "|������ ���������: " << ar[i].feedb <<"\n"<< endl;
	}

	int idbook;
	int feedback;

		cout << "������� id �����" << endl;
		cin >> idbook;
		if (idbook != NULL) {
			cout << "������� ���� ������ ���� �����" << endl;
			cin >> feedback;
			switch (feedback) {
			case badlu:
				ar[idbook].feedb = badlu;
				break;
			case madium:
				ar[idbook].feedb = madium;
				break;
			case good:
				ar[idbook].feedb = good;
				break;
			case excellent:
				ar[idbook].feedb = excellent;
				break;
			default:
				cout << "������� ������������ �����." << endl;
				break;
			}
		}

	}
}

int main() { setlocale(LC_ALL, "Russian");
	string login;
	string password;

	struct book* b;
	cout << "���������� � ���������:\n ���� ����������������: C++\n �������� ������ ���������: \n ������� ��������� book,������� �������� ��� ��������� ��������� ������ � ���� ������� �������.\n ��� �������������� ����� ������������ ������ ������ ����� � ������, \n������� ����������� � �������� ��������� if � ������ ���� true � ����� ����������. \n ����� �������� ����� ����������� ������� vhod, \n������� ����������� � ������������ id ����� � ����� �� ��� �����. \n � ����� ������������ ������������ ����������� ������� � ������� � ������.\n ����� ���������: "<<&b<<endl;
	while (true)
	{
		cout << "Login" << endl;
		cin >> login;
		cout << "Pass" << endl;
		cin >> password;

		if ((login == "admin" && password == "1234") || (login == "ad" && password == "1")) {
			vhod();
			break;
		}
		else
		{
			cout << "Result:0" << endl;
		}
	}
}
