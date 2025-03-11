#include "Math.h"
#include <iostream>

using namespace std;
int main()
{
	Math A;
	cout<<A.Add(10, 14)<<endl;
	cout << A.Add(10, 14, 15) << endl;
	cout << A.Add(8.14, 3.1) << endl;
	cout << A.Add(8.14, 3.1, 7.5) << endl;

	cout << A.Mul(8, 3) << endl;
	cout << A.Mul(8, 3, 3) << endl;
	cout << A.Mul(8.12, 3.5) << endl;
	cout << A.Mul(8.12, 3.5, 5.3) << endl;

	cout << A.Add(6, 2, 6, 5, 465, 11, -4) << endl;
	cout << A.Add("abc", "xyz");
}