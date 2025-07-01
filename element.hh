#pragma once

#include <string>

class element {

public:
  element(std::string name);
  virtual ~element();
  
  virtual void track();
  
  std::string get_name();
  
protected:
  
  virtual void track_single();
  
private:
  std::string _name;
};
