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

void element::track() {
  std::cout << "track" << " " << _name << std::endl;
  track_single();
}

void element::track_single() {
  std::cout << "track_signal" << " " << _name << std::endl;
}
