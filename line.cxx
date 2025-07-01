#include "line.hh"

line::line() {}

line::~line() {}

void line::add_element(std::shared_ptr<const element> e) {
  _elements.push_back(e);
}

void line::track() {
  for(auto e : _elements) {
    e->track();
  }
  
}

int line::size() {
  return _elements.size();
}
