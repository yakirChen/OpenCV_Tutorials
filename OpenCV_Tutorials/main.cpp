//
//  main.cpp
//  OpenCV_Tutorials
//
//  Created by yakir on 2018/11/8.
//  Copyright © 2018 yakir. All rights reserved.
//

#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char **argv) {

    if (argc != 2) {
        printf("使用: OpenCV_Tutorials <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread(argv[1], 1);
    if (!image.data) {
        printf("没有照片数据 \n");
        return -1;
    }
    namedWindow("显示照片", WINDOW_AUTOSIZE);
    imshow("显示照片", image);
    waitKey(0);
    return 0;
}
