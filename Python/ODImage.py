import cv2

class ODImage:
    def __init__(self, directory):
        im = cv2.imread(directory);
        if im.size().width > 0 and im.size().height > 0:
            self.image = im;
            image.copyTo(self.original);
            self.filedir = directory;
        else:
            # change to OD Exception
            raise Exception("No Valid Image : ODImage(%s)" % directory);
        