#include <iostream>

#include "element.hh"

element::element(std::string name) {
  _name = name;
}

element::~element() {
}

std::string element::get_name() {
  return _name;
}

void element::track() const {
  std::cout << "C++ track" << " " << _name << std::endl;
  track_single();
}

void element::track_single() const{
  std::cout << "C++ track_signal" << " " << _name << std::endl;
}
