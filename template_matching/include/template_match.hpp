#ifndef __TEMPLATE_MATCH_HPP__
#define __TEMPLATE_MATCH_HPP__


#include <stdio.h>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

int matchTemplate(unsigned char *dataIn, unsigned char *dataOut, unsigned char *templ, int width, int height);

#endif // __TEMPLATE_MATCH_HPP__