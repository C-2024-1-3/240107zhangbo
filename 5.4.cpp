#include<iostream>
#include<ctime>
using namespace std;
class Student
{
private:
	int id;
	int grades;
public:
	void setstudent(int s_id, int s_grades)
	{
		id = s_id;
		grades = s_grades;
	}
	int showgrades()
	{
		return grades;
	}
	int showid()
	{
		return id;
	}
};
Student max(Student array[])
{
	int size = sizeof(array) / sizeof(array[0]);
	Student temp = array[0];
	for (int i = 1; i < size; i++)
	{
		if (temp.showgrades() < array[i].showgrades())
		{
			temp = array[i];
		}
	}
	return temp;
}
int main()
{
	Student studentarray[5];
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		studentarray[i].setstudent(rand() % 5 + 1, rand() % 100 + 1);
	}
	Student winner = max(studentarray);
	cout << "the greatest student id:" << winner.showid() << endl;
}