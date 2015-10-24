#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){

    Mat img = imread("/home/matheus/Pictures/pic1.jpg",CV_LOAD_IMAGE_COLOR);

    unsigned char** buffer = new unsigned char*[img.rows];
    for (int i = 0; i < img.rows; ++i)
    buffer[i] = new unsigned char[img.cols];

    for (int i = 0; i < img.rows; i++) {
        for (int j = 0; j < img.cols; j++) {
            buffer[i][j] = img.at<uchar>(i, j);
            printf("%u ",buffer[i][j]);
        }
        printf("\n");
    }

    namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display window", img );
    waitKey(0);

    return 0;
}
