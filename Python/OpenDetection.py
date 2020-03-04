import cv2

class ODImage:
    def __init__(self, directory):
        im = cv2.imread(directory);
        if im is not None:
            self.image = im;
            self.original = self.image.copy();
            self.filedir = directory;
        else:
            try:
                raise Exception("No Valid Image : ODImage(%s)" % directory);
            except Exception as error:
                print(error);
    
    def display(self, window_title = None):
        if self.image is not None:
            if window_title is None:
                cv2.imshow(self.filedir, self.image);
            else:
                cv2.imshow(window_title, self.image);
        else:
            try:
                raise Exception("No Valid Image : display() [%s]" % self.filedir);
            except Exception as error:
                print(error);