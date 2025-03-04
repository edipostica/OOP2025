#include <iostream>
#include "functii.h"
#include "Student.h"

using namespace std;

int main()
{
	Student a, b;
	a.SetNume("Popescu");
	a.SetPrenume("Ion");
	a.SetMath(9);
	a.SetEnglish(8);
	a.SetHistory(5);



	b.SetNume("Ionescu");
	b.SetPrenume("Maria");
	b.SetMath(8);
	b.SetEnglish(8.5);
	b.SetHistory(6);



	cout << a.GetNume() << " " << a.GetMath() << " " << a.GetEnglish() << " " << a.GetHistory() << " " << a.GetAverage() << endl;
	cout << b.GetNume() << " " << b.GetMath() << " " << b.GetEnglish() << " " << b.GetHistory() << " " << b.GetAverage() << endl;

	cout << CompareName(a, b) << endl;
	cout << CompareMate(a, b) << endl;
	cout << CompareEngleza(a, b) << endl;
	cout << CompareIstorie(a, b) << endl;
	cout << CompareAverage(a, b) << endl;
	return 0;
}