#pragma once
#include "Class1.h"

class OutsideClass :public Kristina::Class1
{
public:
	void show()const
	{
		std::cout << "OutsideClass\n";
	}
};