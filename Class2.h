#pragma once
#include <iostream>
#include "Class1.h"

namespace Kristina
{
	class Class2 :public Class1
	{
	public:
		void show()const
		{
			std::cout << "Class2 derived from namespace Kristina\n";
		}
	};
}