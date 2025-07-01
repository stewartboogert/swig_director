import element
import line
import element_track
import element_track_single

def test() :
    e1 = element.element("e1")
    e2 = element.element("e2")
    d1 = element_track.element_track("t")
    d2 = element_track_single.element_track_single("ts")
    l = line.line()
    l.add_element(e1)
    l.add_element(e2)
    l.add_element(d1)
    l.add_element(d2)

    l.track()
