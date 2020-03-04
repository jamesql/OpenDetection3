import cv2

class ODImage:
    def __init__(self, directory):
        im = cv2.imread(directory);
        if im is not None:
            self.image = im;
            image.copyTo(self.original);
            self.filedir = directory;
        else:
            try:
                raise Exception("No Valid Image : ODImage(%s)" % directory);
            except Exception as error:
                print(error);