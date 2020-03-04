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
    if (image.size().width > 0 && image.size().height > 0) {
        imshow(imageDir, image);
    } else throw "No Valid Image : display (" + imageDir + ")";
}

void ODImage::display (string win) {
    if (image.size().width > 0 && image.size().height > 0) {
        imshow(win, image);
    } else throw "No Valid Image : display (" + imageDir + ")";
}

Mat ODImage::getCurrentImage () {
    return image;
}

Mat ODImage::getOriginalImage () {
    return original;
}