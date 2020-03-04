from OpenDetection import ODImage
import os

# simple finger contours testing 
def main() :
    image = ODImage(os.path.dirname(os.path.dirname(os.path.abspath(__file__))) + '/images/hand1.png');

main();