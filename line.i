// file: example.i
%module line
%{
#include "line.hh"
%}

%feature("director") line;  // Enable director feature for Base

%include "line.hh"
