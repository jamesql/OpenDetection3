#include "ODImage.h"

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
    } else throw "No Valid Image : ODImage(" + dir + ");";
}

void ODImage::display () {

}

void ODImage::display (string win) {

}

Mat ODImage::getCurrentImage () {
    return image;
}

Mat ODImage::getOriginalImage () {
    return original;
}