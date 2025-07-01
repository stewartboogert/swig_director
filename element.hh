#pragma once

#include <string>

class element {

public:
  element(std::string name);
  virtual ~element();
  
  virtual void track() const;
  
  std::string get_name();
  
protected:
  
  virtual void track_single() const;
  
private:
  std::string _name;
};
