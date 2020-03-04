from OpenDetection import ODImage

def main() :
    # contructor requires a path.
    image = ODImage("image1.png");

    # display image
    image.display();
    # you can also display it with a window name
    # image.display("window_name");


main();