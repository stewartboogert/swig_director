// file: example.i
%module(directors="1") element

%{
#include "element.hh"
%}

%include <std_shared_ptr.i>
%shared_ptr(element)

%feature("director", allprotected="1") element;

%include "std_string.i"  
%include "element.hh"


