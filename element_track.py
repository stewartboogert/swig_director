import element

class element_track(element.element) :

    def __init__(self, name):
        super().__init__(name)

    def track(self):
        print("track derived", self.get_name())

