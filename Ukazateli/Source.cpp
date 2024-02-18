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
string knigi[]{ "Война и мир","Мёртвые души", "Граф Монте-Кристо","Три мушкетёра" };
string author[]{ "Л.Н.Толстой","Н.В.Гоголь", "Александр Дюма","Александр Дюма" };

void shapzap(book ar[]) {//4
	
	const int size = 4;
	for (int i = 0; i < size; i++) {
		ar[i].name = knigi[i];
		ar[i].avthor = author[i];
		ar[i].year = rand();
		ar[i].feedb = 0;
	}
} // Заполнение по умолчанию

void vivid(book ar[]) {
	const int size = 4;
	cout << "\nСписок книг:\n" << endl;

	for (int i = 0; i < size; i++) {
		cout << "|Наименование: " << i << " | " << ar[i].name << endl;
		cout << "|Автор: " << ar[i].avthor << endl;
		cout << "|Год: " << ar[i].year << endl;
		cout << "|Оценка читателей: " << ar[i].feedb << "\n" << endl;
	}
} // Вывод массива book.

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
		
		cout << "Остановить?" << endl;
		cin >> zapr;
		
		if (zapr == "1") {break;
		}
	}

	for (int i = 0; i < myArray.size(); i++) {
		cout << "|Наименование: " << i << " | " << myArray[i].name << endl;
		cout << "|Автор: " << myArray[i].avthor << endl;
		cout << "|Год: " << myArray[i].year << endl;
		cout << "|Оценка читателей: " << myArray[i].feedb << "\n" << endl;
	}
} // Заполнение динамического массива vector из структуры book и вывод его содержимого.

void main() {
	setlocale(LC_ALL, "Russian");

	string login;
	string password;
	int command;
	struct book* b;

	book ar[4];
	shapzap(ar);

	cout << "Информация о программе:\n Язык программирования: C++\n Описание работы программы: \n Создана структура book,которая помогает нам поместить связанные данные в один элемент массива.\n При первоначальном входе пользователь должен ввести логин и пароль, \nкоторые проверяются в условном операторе if и должны быть true в обоих выражениях. \n После удачного входа запускается функция vhod, \nкоторая запрашивает у пользователя id книги и отзыв на эту книгу. \n В итоге пользователю отображается обновленная таблица с данными о книгах.\n Адрес структуры: " << &b << endl;

	vivid(ar);

	while (true)
	{
		cout << "Login" << endl;
		cin >> login;
		cout << "Pass" << endl;
		cin >> password;

		if ((login == "admin" && password == "1234") || (login == "ad" && password == "1")) {
			cout << "Введите запрос: \n1 - Добавить книгу; \n2 - Оценить книгу." << endl;
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
//using namespace std; // Можем обращаться к пространству имен std без прописывания std (using std::endl;using std::cout;using std::cin;)
//// Статические и динамические переменные
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
//string knigi[]{ "Война и мир","Мёртвые души", "Граф Монте-Кристо","Три мушкетёра"};
//string author[]{ "Л.Н.Толстой","Н.В.Гоголь", "Александр Дюма","Александр Дюма"};
//void ocen() {
//	enum dm { badlu, madium, good, excellent }; // Создаю перечисление, где каждому объекту задаётся значение i+1 (0,1,2,3)
//	const int size = 4;
//	book ar[size];
//	int idbook;
//	int feedback;
//
//	cout << "Введите id книги" << endl;
//	cin >> idbook;
//	if (idbook != NULL) {
//		cout << "Введите свою оценку этой книги" << endl;
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
//			cout << "Введена неправильная оцена." << endl;
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
//	cout << "\nСписок книг:\n" << endl;
//
//	for (int i = 0; i < size; i++) {
//		cout<<"|Наименование: "<< i << " | " << ar[i].name << endl;
//		cout<< "|Автор: " << ar[i].avthor << endl;
//		cout<< "|Год: " << ar[i].year  << endl;
//		cout<< "|Оценка читателей: " << ar[i].feedb <<"\n"<< endl;
//	}
//	ocen();
//	/*int idbook;
//	int feedback;
//
//		cout << "Введите id книги" << endl;
//		cin >> idbook;
//		if (idbook != NULL) {
//			cout << "Введите свою оценку этой книги" << endl;
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
//				cout << "Введена неправильная оцена." << endl;
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
//	cout << "Информация о программе:\n Язык программирования: C++\n Описание работы программы: \n Создана структура book,которая помогает нам поместить связанные данные в один элемент массива.\n При первоначальном входе пользователь должен ввести логин и пароль, \nкоторые проверяются в условном операторе if и должны быть true в обоих выражениях. \n После удачного входа запускается функция vhod, \nкоторая запрашивает у пользователя id книги и отзыв на эту книгу. \n В итоге пользователю отображается обновленная таблица с данными о книгах.\n Адрес структуры: "<<&b<<endl;
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
