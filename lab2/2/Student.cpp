#include "Student.h"

Student::Student()
{
	mate = engleza = istorie = 0;
}

void Student::SetNume(string name)
{
	nume = name;
}

void Student::SetPrenume(string name)
{
	prenume = name;
}

void Student::SetMath(float grade)
{
	mate = grade;
}

void Student::SetEnglish(float grade)
{
	engleza = grade;
}

void Student::SetHistory(float grade)
{
	istorie = grade;
}

string Student::GetNume()
{
	return nume+" "+prenume;
}


float Student::GetMath()
{
	return mate;
}

float Student::GetHistory()
{
	return istorie;
}

float Student::GetEnglish()
{
	return engleza;
}

float Student::GetAverage()
{
	return (mate+engleza+istorie)/3;
}
