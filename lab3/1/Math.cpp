#include "Math.h"

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return (int)(a+b);
}

int Math::Add(double a, double b, double c)
{
	return (int)(a+b+c);
}

int Math::Mul(int a, int b)
{
	return a*b;
}

int Math::Mul(int a, int b, int c)
{
	return a*b*c;
}

int Math::Mul(double a, double b)
{
	return (int)(a*b);
}

int Math::Mul(double a, double b, double c)
{
	return (int)(a*b*c);
}

int Math::Add(int count, ...)
{
	int result = 0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
		result += va_arg(args, int);

	return result;
}

char* Math::Add(const char* a, const char* b)
{
	if(a==nullptr or b==nullptr)
		return nullptr;

	char* c = new char;
	strcpy(c, a);
	strcat(c, b);
	return c;
}

