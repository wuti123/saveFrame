#include "../include/readvideo.h"
using namespace cv;

readVideo::readVideo(string videoName, string storeFilePath, string nameSuffix)
{
    this->videoName  = videoName;
    this->storeFilePath = storeFilePath;
    this->nameSuffix = nameSuffix;

}


void readVideo::saveFrame(string frameHeadName)
{
    VideoCapture capture(videoName);
    Mat frame;

    int count = 0;
    string name;

    while (1)
    {
        capture >> frame;

        if (frame.empty())
        {
            break;
        }

        name = storeFilePath +  "/" + frameHeadName  + to_string(count++) + nameSuffix;
        imwrite(name, frame);
        imshow("tmp", frame);

        waitKey(10);

    }

}

readVideo::~readVideo()
{

}
