%module example
%{
// Put your header file here
#include "example.h"
%}

// Use the header file to generate wrappers
%include "example.h"
