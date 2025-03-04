#include "NumberList.h"
#include <iostream>

int main()
{
	NumberList n;
	n.Init();
	n.Add(2);
	n.Add(6);
	n.Add(3);
	n.Add(9);
	n.Add(1);
	n.Sort();
	n.Print();
}