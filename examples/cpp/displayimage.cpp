#include "OpenDetection/ODImage.h"

int main() {
    ODImage image("image1.png");

    // display image
    image.display();
    // display with window name
    // image.display("window_name");

    return 0;
}