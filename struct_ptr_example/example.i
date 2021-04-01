%module example
%{
// Put your header file here
#include "example.h"
%}

// Use the header file to generate wrappers
%include "example.h"

// Able to use pointer
%include "cpointer.i"
// pointer "int *"
%pointer_functions(int, intptr);
// pointer "MYSTRUCT *"
%pointer_functions(struct MYSTRUCT, mystructptr);
