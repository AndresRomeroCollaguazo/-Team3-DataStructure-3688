#include "pch.h"
#include "CppUnitTest.h"
#include "../CuotasMensuales/Date.h"
#include "../CuotasMensuales/Operations.h"
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Date date1(12, 12, 2021);
			Operations op;
			Date date2 = op.enter_Date();
			cout << date2.getDay() << endl;
			Assert::AreEqual(date1, date2);

		}
	};
}
