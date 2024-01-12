
#include "Student.h"
#include "Date.h"





void InputData(Student *st)////вже є студент в пам'яті
{
	cout<<"Введите имя студента: ";
	cin >> st->Name;
	cout<<"Введите фамилию студента: ";
	cin >> st->Surname;
	cout<<"Введите возраст студента: ";
	cin >> st->Age;
	cout<<"Введите телефон студента: ";
	cin >> st->Phone;
	cout << "Введите дату рождения студента: "<<endl;
	cout << "День: ";
	cin >> st->Birthday.day;
	cout << "Месяц: ";
	cin >> st->Birthday.month;
	cout << "Год: ";
	cin >> st->Birthday.year;
	cout<<"Введите средний балл студента: ";
	cin >> st->GPA;
}

void OutputStudent(Student* st)
{
	cout << "Имя студента: "<< st->Name << endl;
	cout << "Фамилия студента : "<< st->Surname << endl;
	cout << "Возраст студента : "<< st->Age << endl;
	cout << "Телефон студента : "<< st->Phone << endl;
	cout << "Дата рождения студента : " << st->Birthday.day<<'.'<< st->Birthday.month << '.' << st->Birthday.year << endl;
	cout << "Cредний балл студента : "<<st->GPA << endl;
}

void AddStudents(ArrayStudents& a, Student* st)
{
	

	int new_num = a.Count + 1;
	
		Student **temp = new Student *[new_num];
		for (int i = 0; i < a.Count; i++)
			temp[i] = a.list[i];
		delete[]   a.list;
		a.list = temp;
	
		
		a.list[a.Count++] = st;
	
		cout << endl;
		int a = 0;///Добавила комментарий
}

void RemoveStudent(ArrayStudents &a,int index)
{
	int new_num = a.Count - 1;

	Student** temp = new Student * [new_num];
	for (int i = 0; i < index; i++)
		temp[i] = a.list[i];
	for (int i = index; i < a.Count; i++)
		temp[i] = a.list[i+1];
	delete[]   a.list;
	a.list = temp;
	a.Count--;

}

void EditStudent(ArrayStudents &a,int index)
{
	InputData(a.list[index]);
	
}

void PrintStudents(const ArrayStudents &a)
{

	for (int i = 0; i < a.Count; i++)
	{
		cout << setw(15) << a.list[i]->Name
			<< setw(15) << a.list[i]->Surname
			<< setw(10) << a.list[i]->Age
			<< setw(20) << a.list[i]->Phone
			<< setw(10) << a.list[i]->Birthday.day << "." << a.list[i]->Birthday.month << "." << a.list[i]->Birthday.year
			<< setw(15) << a.list[i]->GPA
			<< endl;
	}
	
}

void Destroy(ArrayStudents &a)
{
	for (int i = 0; i < a.Count; i++)
		delete a.list[i];
	delete[] a.list;
	
}

int FindStudentIndex(const ArrayStudents& a, Student* st)
{
	int index = -1;
	for (int i = 0; i < a.Count; i++)
	{
		if (strcmp(a.list[i]->Surname, st->Surname) == 0 && strcmp(a.list[i]->Name, a.list[i]->Name)==0)
		{
			index= i;
			break;
		}
			


	}
	return index;
}


