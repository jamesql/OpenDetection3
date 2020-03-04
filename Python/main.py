from OpenDetection import ODImage
import os
import cv2

def main() :
    image = ODImage(os.path.dirname(os.path.dirname(os.path.abspath(__file__))) + '/images/hand1.png');
    image.display("window test");
    cv2.waitKey(0);

main();