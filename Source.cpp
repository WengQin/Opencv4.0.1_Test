#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{
	//读取本地的一张图片便显示出来
	Mat img = imread(".\\3.jpg"); //此处是双斜杠
	imshow("测试窗口", img);
	waitKey(0);
	return 0;
}