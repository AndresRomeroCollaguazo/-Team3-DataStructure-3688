#include "pch.h"
#include "CppUnitTest.h"
#include "../Deber Multiplicacion Matrices dinamica/Matrix.h"
#include "../Deber Multiplicacion Matrices dinamica/Operations.h"

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
		TEST_METHOD(Multiplicar)
		{
			Operations op;
			Matrix matA;
			Matrix matB;
			Matrix matC;
			matA.set_matrix(op.segment(2));
			matB.set_matrix(op.segment(2));
			matC.set_matrix(op.segment(2));
			int i, j;
			for (i = 0; i < 2; i++)
				for (j = 0; j < 2; j++)
					*(*(matA.get_matrix() + i) + j) = 4;

			for (i = 0; i < 2; i++)
				for (j = 0; j < 2; j++)
					*(*(matB.get_matrix() + i) + j) = 5;


			op.wax(matC, 2);
			op.multiply(matA, matB, matC, 2);
			Assert::IsNotNull(matC.get_matrix());
		}
	};
}
