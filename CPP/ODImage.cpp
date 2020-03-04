#include "ODImage.h"

Mat image;
Mat original;

ODImage::ODImage (string dir) {
    Mat cur = imread(dir);
    const Size size = cur.size();
    if (size.width > 0 && size.height > 0) {
    image = cur;
    image.copyTo(original);
    } else throw "No Valid Image : ODImage(" + dir + ");";
}

void ODImage::display() {

}

void ODImage::display(string win) {

}

