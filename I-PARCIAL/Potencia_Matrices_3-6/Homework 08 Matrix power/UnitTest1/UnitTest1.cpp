#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrices Potenciadas/Matrix.h"
#include "../Matrices Potenciadas/Operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Segmentar)
		{
			Operations op;
			int** b;
			b = op.segment(13);
			Assert::IsNotNull(b);
		}
		TEST_METHOD(Potenciar)
		{
			Operations op;
			Matrix matA;
			Matrix matC;
			matA.set_matrix(op.segment(2));
			matC.set_matrix(op.segment(2));
			int i, j;
			for (i = 0; i < 2; i++)
				for (j = 0; j < 2; j++)
					*(*(matA.get_matrix() + i) + j) = 4;

			op.wax(matC, 2);
			op.boosted(matA, matC, 2, 2);
			Assert::IsNotNull(matC.get_matrix());
		}
	};
}
