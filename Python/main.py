import cv2

image = cv2.imread("../images/hand1.png");

def main() :
    cv2.imshow("test", image);
    cv2.waitKey(30);
    return 0;

main();