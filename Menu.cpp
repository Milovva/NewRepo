#include "Menu.h"
#include "Date.h"
void Menu(char ptr[][30], int row)
{
	for (int i = 0; i < row; i++)
	{
		cout << ptr[i];
		cout << endl;
	}
}

void MenuAddStudents(ArrayStudents& a)
{
	system("cls");

	///Підготували студента що будемо додавати
	Student* st = new Student;
	cout << "Введите данные ";

	cout << " студента\n";
	InputData(st);

	
	AddStudents(a, st);
	cout << "В список добавлены новые студенты!";
	_getch();
}

void MenuRemoveStudent(ArrayStudents& a)
{
	system("cls");
	Student st[15];
	cout << "Введите имя студента: ";
	cin >> st->Name;
	cout << "Введите фамилию студента: ";
	cin >> st->Surname;
	int index = FindStudentIndex(a, st);
	if (index >= 0)
	{
		RemoveStudent(a, index);
		cout << "Студент удален из списка" << endl;
	}
	else
		cout << "Студент не найден" << endl;

	_getch();
}

void MenuEditStudent(ArrayStudents& a)
{
	system("cls");
	Student st[15] ;
	cout << "Введите имя студента: ";
	cin >> st->Name;
	cout << "Введите фамилию студента: ";
	cin >> st->Surname;


	int index = FindStudentIndex(a, st);
	if (index >= 0)
		EditStudent(a, index);
	else cout << "Student not found" << endl;
	_getch();
}



void MenuPrintStudents(const ArrayStudents& a)
{
	

	system("cls");

	cout << setw(15);
	cout << "Имя";
	cout << setw(15);
	cout << "Фамилия";
	cout << setw(10);
	cout << "Возраст";
	cout << setw(20);
	cout << "Телефон";
	cout << setw(10);
	cout << "Дата рождения";
	cout << setw(15);
	cout << "Средний балл";
	cout << endl << endl;
	PrintStudents(a);
	_getch();
}






//#include<iostream>
//#include<time.h>
//using namespace std;
////Set - функції прийнято називати мутаторами(mutators)
////або модифікаторами, оскільки вони змінюють значення
////полів об’єкта.
////Get - функції, відповідно прийнято називати аксесорами
////(accessors) або інспекторами(inspectors), оскільки вони
////здійснюють доступ(access) до значень, перегляд значень.
////Використання аксесорів і мутаторів дає наступні
////переваги :
////■■ дані захищаються від неправильного використання;
////■■ перевірка коректності даних концентрується в одному
////місці(в мутаторів);
////■■ зміна структури даних класу не тягне за собою зміну
////інших частин програми;
////■■ програму легше налагоджувати(задання точки зупину
////	в мутаторів дозволить відстежити всі зміни змінно -
////	ї - члена класу).
//class Point
//{
//	private: //// ПО УМОЛЧАНИЮ   private:
//	int x;
//	int y;
//public:
//	Point() // construct by default
//	{
//		cout << "Construct  default\n";
//		x = y = 0;
//	}
//	Point(int x1, int y1) // Construct by 2 param
//	{
//		cout << "Construct by 2 param\n";
//		x = x1;
//		y = y1;
//	}
//	void Init()///перегрузка фнкции Init
//	{
//		srand(unsigned(time(0)));
//		x = rand() % 10;
//		y = rand() % 10;
//	}
//	void Init(int x1, int y1)///перегрузка фнкции Init
//	{
//		x = x1;
//		y = y1;
//	}
//	void Output()
//	{
//		cout << "X: " << x << "\tY: " << y << endl;
//	}
//	void Sum(Point& p)
//	{
//		x += p.x;
//		y += p.y;
//	}
//
//	void SetX(int xx)
//	{
//		/////проверка условия
//		if(xx>0)
//		x = xx;
//	}
//	void SetY(int yy)
//	{
//		if(yy>0)
//		y = yy;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//};
//
//
//
//struct Point1/////////////описание сущности точка  с характеристиками - полями
//{
////public:///відкритий доступ
//
//
//	int x;//поля  ПО УМОЛЧАНИЮ public
//	int y;
//
//};
//
//int main()
//{
//	/////Структура по умолчанию паблик 
//	/*Point1 p1;
//	p1.x;*/
//
//
//	Point obj1;
//	obj1.Output();
//	
//
//	//Point obj2(10, 20);
//	//obj2.Output();
//
//
//	//obj1.Sum(obj2);
//	//obj1.Output();
//}