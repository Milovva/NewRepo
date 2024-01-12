#include <Windows.h>
#include <conio.h>
#include "Student.h"
#include "Menu.h"
#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);


	/*Student obj1;
	std::cout << sizeof(obj1) << endl;*/

	//Student** list = nullptr;///list[i]

	//int Count = 0;



	ArrayStudents a;
	a.Count = 0;// / 0
	a.list=nullptr;///nullptr  список 

	Student* st1 = new Student{ "Name1","Surename1",22,"222322",01,01,2001,10.5 };
	Student* st2 = new Student{ "Name2","Surename2",23,"11111",02,02,2002,10 };

	




	AddStudents(a, st1);
	AddStudents(a, st2);
	char menu[][30] = {
		"1. Добавление студентов",
		"2. Удаление студента",
		"3. Модификация студента",
		"4. Вывод на экран списка",
		"5. Выход" };
	while (true)
	{
		system("cls");
		Menu(menu, 5);
		int choice = _getch();
		switch (choice)
		{
		case '1':
			MenuAddStudents(a);
			break;
		case '2':
			MenuRemoveStudent(a);
			break;
		case '3':
			MenuEditStudent(a);
			break;
		case '4':
			MenuPrintStudents(a);
			break;
		case '5':
			Destroy(a);
			return 0;
		}
	}

	return 0;
}