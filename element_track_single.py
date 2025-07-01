import element

class element_track_single(element.element) :

    def __init__(self, name):
        super().__init__(name)

    def track_single(self):
        print("track single derived")
