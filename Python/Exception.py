class ODException(Exception):
    def __init__(self, *args):
        if args:
            self.str = args[0]
        else:
            self.str = None
    
    def __str__(self):
        if self.str:
            return self.str
        else:
            return "Generic ODException thrown."