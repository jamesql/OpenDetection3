#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

class ODImage {
    public:
        ODImage(void);
        void display();
        cv::Mat getCurrentImage();
        cv::Mat getOriginal();

    private:
        cv::Mat image;
        cv::Mat original;

};