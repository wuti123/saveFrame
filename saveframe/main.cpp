#include <iostream>
#include "include/readvideo.h"
#include <string>

using namespace std;

int main()
{
    readVideo video("/home/frank/Desktop/video/one3.mp4", "/home/frank/Desktop/video/one3");
    video.saveFrame("one");


    return 0;
}
