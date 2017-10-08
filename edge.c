#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
 
int main()
{
    VideoCapture capture(0);
    capture.set(CV_CAP_PROP_FRAME_WIDTH, 1280);
    capture.set(CV_CAP_PROP_FRAME_HEIGHT, 720);
    capture.set(CV_CAP_PROP_BRIGHTNESS, 255);

    if (! capture.isOpened())
    {
        cout << "Failed to connect to the camera." << endl;
    }
    Mat frame;
    capture >> frame;
    capture >> frame;

    if (frame.empty())
    {
        cout << "Failed to capture an image" << endl;
        return -1;
    }
    
    imwrite("capture.jpg", frame);
    return 0;
}
