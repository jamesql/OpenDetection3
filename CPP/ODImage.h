#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

using namespace std;
using namespace cv;

class ODImage {
    public:
        ODImage(string);
        void display();
        void display(string);
        Mat getCurrentImage();
        Mat getOriginalImage();

    private:
        Mat image;
        Mat original;
        string imageDir;

};