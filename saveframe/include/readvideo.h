#ifndef READVIDEO_H
#define READVIDEO_H

#include <opencv2/opencv.hpp>
#include <string>

using namespace std;


class readVideo
{
public:
    string videoName;
    string storeFilePath;
    string nameSuffix;

    readVideo(string videoName, string storeFilePath, string nameSuffix = ".jpg");   // 构造函数，传入视频文件名，和图片要保持的位置路径，图片要保存的格式（可选，默认jpg格式）
    void saveFrame(string frameHeadName);                // 读取视频，将视频的每一帧图片按给定的frameHeadName名字保持在storeFilePath文件夹中

    ~readVideo();
};


#endif // READVIDEO_H
