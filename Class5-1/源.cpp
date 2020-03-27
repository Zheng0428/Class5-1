#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	while (1)
	{
		Mat frame;
		Mat detectMat;

		cap >> frame;
		medianBlur(frame, detectMat, 3);
		imshow("frame", frame);
		imshow("now", detectMat);

		waitKey(30);



	}
}