from OpenDetection import ODImage
import os

def main() :
    image = ODImage(os.path.dirname(os.path.dirname(os.path.abspath(__file__))) + '/images/hand1.png');
    image.display("TEST");

main();