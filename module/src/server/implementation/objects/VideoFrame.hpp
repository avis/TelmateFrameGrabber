//
// Created by Avi Saranga on 5/24/17.
//
#ifndef TELMATEFRAMEGRABBER_VIDEOFRAME_HPP
#define TELMATEFRAMEGRABBER_VIDEOFRAME_HPP
#include <OpenCVProcess.hpp>

namespace kurento
{

class VideoFrame {
public:
    VideoFrame() { };
    cv::Mat mat;
    std::string epName;
    std::string ts;

private:


};

}


#endif //TELMATEFRAMEGRABBER_VIDEOFRAME_HPP
