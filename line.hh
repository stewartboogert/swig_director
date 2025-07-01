#pragma once

#include <vector>
#include <memory>

#include "element.hh"

class line {
public:
  line();
  ~line();
  
  void add_element(std::shared_ptr<const element> e);
  void add_element(std::shared_ptr<element> e);
  void track();

  int size();
  
private:
  std::vector< std::shared_ptr<const element> > _elements;
};
