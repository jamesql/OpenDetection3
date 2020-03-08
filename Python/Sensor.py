import cv2

class ODSensor:
    def __init__(self, frame):
        self.net = cv2.dnn.readNetFromTensorflow();