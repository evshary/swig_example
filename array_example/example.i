%module example
%{
// Put your header file here
#include "example.h"
%}

// Use the header file to generate wrappers
%include "example.h"

// ----- Able to use pointer -----
%include "cpointer.i"
// pointer "int*"
%pointer_functions(int, intptr)
// pointer "MYSTRUCT *"
%pointer_functions(struct MYSTRUCT, mystructptr);

// ----- Use array -----
%include "carrays.i"
// simple array
%array_functions(double, doubleArray);
// Use another array
%array_class(double, doubleArray2);
// struct array
%array_functions(struct MYSTRUCT, structArray);
// No suggest: Use another struct array
%array_class(struct MYSTRUCT, structArrayClass);

// ----- transfer ownership to new object -----
%newobject example_get_struct_array;
struct MYSTRUCT* example_get_struct_array(int *num);
