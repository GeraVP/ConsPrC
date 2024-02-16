#include <iostream>
#include <string>
using namespace std; // Можем обращаться к пространству имен std без прописывания std (using std::endl;using std::cout;using std::cin;)

struct book
{
	string name;
	string avthor;
	int year;
	int feedb;
};
void vhod() {enum dm { badlu, madium, good, excellent }; // Создаю перечисление, где каждому объекту задаётся значение i+1 (0,1,2,3)
	string knigi[]{ "Война и мир","Мёртвые души", "Граф Монте-Кристо","Три мушкетёра"};
	string author[]{ "Л.Н.Толстой","Н.В.Гоголь", "Александр Дюма","Александр Дюма"};

	const int size = 4;
	book ar[size];
	
	for (int i = 0; i < size; i++) {
		ar[i].name = knigi[i];
		ar[i].avthor = author[i];
		ar[i].year = rand();
		ar[i].feedb = 0;
	}
	while (true) {
	cout << "\nСписок книг:\n" << endl;

	for (int i = 0; i < size; i++) {
		cout<<"|Наименование: "<< i << " | " << ar[i].name << endl;
		cout<< "|Автор: " << ar[i].avthor << endl;
		cout<< "|Год: " << ar[i].year  << endl;
		cout<< "|Оценка читателей: " << ar[i].feedb <<"\n"<< endl;
	}

	int idbook;
	int feedback;

		cout << "Введите id книги" << endl;
		cin >> idbook;
		if (idbook != NULL) {
			cout << "Введите свою оценку этой книги" << endl;
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
				cout << "Введена неправильная оцена." << endl;
				break;
			}
		}

	}
}

int main() { setlocale(LC_ALL, "Russian");
	string login;
	string password;

	struct book* b;
	cout << "Информация о программе:\n Язык программирования: C++\n Описание работы программы: \n Создана структура book,которая помогает нам поместить связанные данные в один элемент массива.\n При первоначальном входе пользователь должен ввести логин и пароль, \nкоторые проверяются в условном операторе if и должны быть true в обоих выражениях. \n После удачного входа запускается функция vhod, \nкоторая запрашивает у пользователя id книги и отзыв на эту книгу. \n В итоге пользователю отображается обновленная таблица с данными о книгах.\n Адрес структуры: "<<&b<<endl;
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
