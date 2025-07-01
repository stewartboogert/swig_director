#include "element.hh"
#include "line.hh"

int main() {
  line l;

  std::shared_ptr<element> e1 = std::shared_ptr<element>(new element("e1"));
  std::shared_ptr<element> e2 = std::shared_ptr<element>(new element("e2"));

  l.add_element(e1);
  l.add_element(e2);

  l.track();
}
