#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Mat image;
          image=imread("test.jpg", CV_LOAD_IMAGE_COLOR);  //讀取圖片RGB model
           namedWindow( "Myimage",CV_WINDOW_AUTOSIZE );  //窗口
           imshow( "Myimage",image );  //顯示於Myimage 窗口上
           waitKey(0);  
          return 0;
}