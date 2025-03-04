#pragma once
#include <string>
using namespace std;

class Student
{
	string nume, prenume;
	float mate, engleza, istorie;
public:
	Student();
	void SetNume(string name);
	void SetPrenume(string name);
	void SetMath(float grade);
	void SetEnglish(float grade);
	void SetHistory(float grade);
	string GetNume();
	float GetMath();
	float GetHistory();
	float GetEnglish();
	float GetAverage();
};

