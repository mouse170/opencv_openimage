#include "opencv2/highgui/highgui.hpp"	//-l opencv_highgui

#include <iostream>

using namespace std;
using namespace cv;		//opencv library

int main()
{
    Mat image;
          image=imread("test.jpg", CV_LOAD_IMAGE_COLOR);  //read test.jpg and it's property
          							//CV_LOAD_IMAGE_ANYDEPTH, CV_LOAD_IMAGE_COLOR, CV_LOAD_IMAGE_GRAYSCALE

           namedWindow( "Myimage",CV_WINDOW_AUTOSIZE );  //Window(title, properties)

           imshow( "Myimage",image );  //show image in Myimage
           waitKey(0);  //delay for 0ms
          return 0;
}
