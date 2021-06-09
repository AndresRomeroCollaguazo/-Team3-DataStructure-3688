/*Universidad de las Fuerzas Armadas "ESPE"
Ing. de Software
Autor: Pérez Hámilton
Deber de Matriz Diagonal
Fecha creación : 06 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */
#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/Matrix.h"
#include "../ConsoleApplication1/Operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace std;
namespace UnitTest1Matriz

{
	TEST_CLASS(UnitTest1Matriz)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int n = 3;
			Matrix** matriz[15][15];
			Operations mat;

			mat.matrix1Di(n);

			int** mattx[3][3];
			
			**mattx[0][0] = 1;
			**mattx[0][1] = 0;
			**mattx[0][2] = 1;			
			**mattx[1][1] = 0;
			**mattx[1][0] = 1;
			**mattx[1][1] = 0;
			**mattx[2][0] = 1;
			**mattx[2][1] = 0;
			**mattx[2][2] = 1;



		}
	};
}
