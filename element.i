// file: example.i
%module(directors="1") element

%{
#include "element.hh"
%}

%include <std_shared_ptr.i>
%include <std_string.i>

%shared_ptr(element)

%template(elementConstPtr) std::shared_ptr<const element>;

%feature("director", allprotected="1") element;

%inline %{
  std::shared_ptr<const element> to_const(std::shared_ptr<element> ptr) {
    return ptr;
  }  
%}

%inline %{
  std::shared_ptr<const element> make_element(std::string name) {
    return std::make_shared<const element>(name);
    // return std::shared_ptr<const element>(new element(name));
  }
%}

%include "element.hh"


