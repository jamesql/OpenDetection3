#include "ODImage.h"
#include "ODException.h"

Mat image;
Mat original;
string imageDir;

ODImage::ODImage (string dir) {
    Mat cur = imread(dir);
    const Size size = cur.size();
    if (size.width > 0 && size.height > 0) {
    image = cur;
    image.copyTo(original);
    imageDir = dir;
    } else throw ODInvalidImage(const_cast<char*>(dir.c_str()));
}

void ODImage::display () {
    if (image.size().width > 0 && image.size().height > 0) {
        imshow(imageDir, image);
        waitKey(0);
    } else throw ODInvalidImage(const_cast<char*>(imageDir.c_str()));
}

void ODImage::display (string win) {
    if (image.size().width > 0 && image.size().height > 0) {
        imshow(win, image);
        waitKey(0);
    } else throw ODInvalidImage(const_cast<char*>(imageDir.c_str()));
}

Mat ODImage::getCurrentImage () {
    return image;
}

Mat ODImage::getOriginalImage () {
    return original;
}