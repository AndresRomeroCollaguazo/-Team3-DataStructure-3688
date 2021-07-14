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
	Mat srcImage = imread("C:\\Users\\jrome\\source\\repos\\ConsoleApplication1\\i.jpg", 0);
	Mat resizeImage;
	string txt;
	char ascii_char[70] = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\|()1{}[]?-_+~<>i!lI;:,\^`'. ";
	float unit = (256.0 + 1) / 69;
	resize(srcImage, resizeImage, Size(100, 62));
	int rowNumber = resizeImage.rows;
	int colNumber = resizeImage.cols;

	for (int i = 0; i < rowNumber; i++) {
		for (int j = 0; j < colNumber; j++) {
			txt += ascii_char[int((resizeImage.at<uchar>(i, j)) / unit)];
		}
		txt += '\n';
	}
	ofstream file;
	string path;
	cout << "INGRESE EL NOMBRE QUE LE VA A DAR A LA IMAGEN POR FAVOR : " << endl;
	cin >> path;
	file.open(path + ".txt");
	if (file.is_open())
	{
		file << txt;
	}
	file.close();
	cout << "\n\n\nLa imagen se genero con exito.." << endl;
	return 0;
}