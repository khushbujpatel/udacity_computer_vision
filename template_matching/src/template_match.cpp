#include "template_match.hpp"

int matchTemplate(unsigned char *dataIn, unsigned char *dataOut, unsigned char *templ, int width, int height)
{
    
    return 0;
}
int main(int argc, char *argv[])
{
    if (argc < 2)
        return -1;
    printf("argv: input:%s tmpl:%s\n", argv[1], argv[2]);
    cv::Mat input, templ, result;
    input = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);
    if (input.empty())
        return -1;
    templ = cv::imread(argv[2], cv::IMREAD_GRAYSCALE);
    if (templ.empty())
        return -1;
    result = cv::Mat::zeros(input.rows, input.cols, CV_8UC1);
    unsigned char* dataIn = input.data;
    unsigned char* dataTemplIn = templ.data;
    unsigned char* dataOut = result.data;
    int width = input.cols;
    int height = input.rows;

    // ---------------------------------
    // Your Code Patch Goes here
    // ---------------------------------
    printf("calling matchTemplate\n");
    matchTemplate(dataIn, dataTemplIn, dataOut, width, height);
    // ---------------------------------
    cv::imshow("input", input);
    cv::imshow("template", templ);
    cv::imshow("result", result);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
    return 0;
}