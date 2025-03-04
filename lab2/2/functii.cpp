#include "functii.h"

int CompareName(Student a, Student b)
{
	if (a.GetNume() == b.GetNume())
		return 0;
	else if (a.GetNume() > b.GetNume())
		return 1;
	else 
		return -1;
}

int CompareMate(Student a, Student b)
{
	if (a.GetMath() == b.GetMath())
		return 0;
	else if (a.GetMath() > b.GetMath())
		return 1;
	else
		return -1;
}

int CompareEngleza(Student a, Student b)
{
	if (a.GetEnglish() == b.GetEnglish())
		return 0;
	else if (a.GetEnglish() > b.GetEnglish())
		return 1;
	else
		return -1;
}

int CompareIstorie(Student a, Student b)
{
	if (a.GetHistory() == b.GetHistory())
		return 0;
	else if (a.GetHistory() > b.GetHistory())
		return 1;
	else
		return -1;
}

int CompareAverage(Student a, Student b)
{
	if (a.GetAverage() == b.GetAverage())
		return 0;
	else if (a.GetAverage() > b.GetAverage())
		return 1;
	else
		return -1;
}