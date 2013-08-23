#include <opencv/cv.h>	//opencv library
#include <stdio.h>
#include <opencv/highgui.h>

void main()
{
	CvMat* image;
		image=cvLoadImageM("test.jpg", CV_LOAD_IMAGE_COLOR);	//read test.jpg and it's property
										//CV_LOAD_IMAGE_ANYDEPTH, CV_LOAD_IMAGE_COLOR, CV_LOAD_IMAGE_GRAYSCALE
		cvNamedWindow("My Image", CV_WINDOW_AUTOSIZE);	//Window(title, properties)

		cvShowImage("My Image", image);	//show image in Myimage
		cvWaitKey(0);	//delay for 0ms
}