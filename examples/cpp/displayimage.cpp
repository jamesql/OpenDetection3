#include "../../CPP/ODImage.h"

int main() {
    ODImage image("../images/image1.png");

    // display image
    image.display();
    // display with window name
    // image.display("window_name");

    return 0;
}