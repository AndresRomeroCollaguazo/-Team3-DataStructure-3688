#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrizPotencia/Matrix.h"
#include "../MatrizPotencia/Fuctions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest
	
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Fuctions f;
			int dim, potencia;

			int** mat1 = new int* [dim];
			int** mat2 = new int* [dim];
			int** mat3 = new int* [dim];
			for (int i = 0; i < dim; i++)
			{
				*(mat1 + i) = new int[dim];
			}
			for (int i = 0; i < dim; i++)
			{
				*(mat3 + i) = new int[dim];
			}
			Matrix m1(mat1, dim);
			Matrix m2(mat2, dim);
			Matrix m3(mat3, dim);
			f.segment(m1);

			f.wax(m1);
			f.segment(m3);
			f.wax(m3);

			f.fill(m1, dim);
			for (int i = 0; i < potencia + 1; i++)
			{
				f.calculate(m1, m3, dim, potencia);
			}
			f.print(m3);
			Assert::AreEqual(m3,m1);
		}
	};
}
