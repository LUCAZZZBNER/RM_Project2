#include"test.h"

void test1()
{
    test0();

    Mat img(1000, 1000, CV_8UC3, Scalar(0, 50, 0));
    imshow("test", img);
    waitKey(0);
}