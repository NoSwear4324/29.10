#pragma once
#include <iostream>
#include "Class1.h"

namespace Kristina
{
	class Class3 :public Class1
	{
	public:
		void show()const
		{
			std::cout << "Class3 derived from namespace Kristina\n";
		}
	};
}