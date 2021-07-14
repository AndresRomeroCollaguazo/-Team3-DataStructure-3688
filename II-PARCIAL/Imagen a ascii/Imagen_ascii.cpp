#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>
#include <fstream>

using namespace cv;
using namespace std;

int main()
{
	Mat Image = imread("C:\\Users\\jrome\\source\\repos\\ConsoleApplication1\\i.jpg", 0);
	Mat tamanioImagen;
	int rowN = tamanioImagen.rows;
	int colN = tamanioImagen.cols;
	float n1 = 3.724637681;
	string txt;
	char ascii[70] = "$#,\^`'.*ownx@B%8&WMrjft/\|()ahkbdpq1{}[]?-_+~<CJUYXz>imZO0QLcvu!lI;: ";
	resize(Image, tamanioImagen, Size(100, 62));
	
	for (int i = 0; i < rowN; i++) {
		for (int j = 0; j < colN; j++) {
			txt += ascii[int((tamanioImagen.at<uchar>(i, j)) / n1)];
		}
		txt += '\n';
	}

	ofstream fl;
	string im;
	cout << "INGRESE EL NOMBRE QUE LE VA A DAR A LA IMAGEN POR FAVOR : " << endl;
	cin >> im;
	
	fl.open(im + ".txt");
	if (fl.is_open())
	{
		fl << txt;
	}
	fl.close();
	
	cout << "\n\n\nLa imagen se genero con exito.." << endl;
	return 0;
}