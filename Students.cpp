
#include "Student.h"
#include "Date.h"





void InputData(Student *st)////��� � ������� � ���'��
{
	cout<<"������� ��� ��������: ";
	cin >> st->Name;
	cout<<"������� ������� ��������: ";
	cin >> st->Surname;
	cout<<"������� ������� ��������: ";
	cin >> st->Age;
	cout<<"������� ������� ��������: ";
	cin >> st->Phone;
	cout << "������� ���� �������� ��������: "<<endl;
	cout << "����: ";
	cin >> st->Birthday.day;
	cout << "�����: ";
	cin >> st->Birthday.month;
	cout << "���: ";
	cin >> st->Birthday.year;
	cout<<"������� ������� ���� ��������: ";
	cin >> st->GPA;
}

void OutputStudent(Student* st)
{
	cout << "��� ��������: "<< st->Name << endl;
	cout << "������� �������� : "<< st->Surname << endl;
	cout << "������� �������� : "<< st->Age << endl;
	cout << "������� �������� : "<< st->Phone << endl;
	cout << "���� �������� �������� : " << st->Birthday.day<<'.'<< st->Birthday.month << '.' << st->Birthday.year << endl;
	cout << "C������ ���� �������� : "<<st->GPA << endl;
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
		int a = 0;///�������� �����������
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


