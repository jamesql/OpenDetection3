import cv2 
from Exception import ODException
 
class ODImage:
    def __init__(self, directory):
        im = cv2.imread(directory);
        if im is not None:
            self.image = im;
            self.original = self.image.copy();
            self.filedir = directory;
        else:
            raise ODException("No Valid Image : ODImage(%s)" % directory);
    
    def display(self, window_title = None):
        if self.image is not None:
            if window_title is None:
                cv2.imshow(self.filedir, self.image);
                cv2.waitKey(0);
            else:
                cv2.imshow(window_title, self.image);
                cv2.waitKey(0);
        else:
            raise ODException("No Valid Image : display() [%s]" % self.filedir);

    def getCurrentImage(self):
        if self.image is not None:
            return self.image;
        else:
            raise ODException("No Valid Image : getCurrentImage() [%s]" % self.filedir);

    def getOriginalImage(self):
        if self.original is not None:
            return self.original;
        else:
            raise ODException("No Valid Image : getOriginalImage() [%s]" % self.filedir);
