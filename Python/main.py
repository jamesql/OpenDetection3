import os.path
import cv2

# simple finger contours testing 
def main() :
    image = cv2.imread(os.path.dirname(os.path.dirname(os.path.abspath(__file__))) + '/images/hand1.png');
    cv2.imshow("test", image);
    cv2.waitKey(0);

main();