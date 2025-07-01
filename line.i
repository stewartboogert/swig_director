// file: example.i
%module(directors="1") line

%{
#include "line.hh"
%}

%include <std_shared_ptr.i>

%shared_ptr(line)

%feature("director", allprotected="1") line;

%include "line.hh"
