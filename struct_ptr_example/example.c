#include <stdio.h>
#include "example.h"

struct MYSTRUCT example_assign_struct(int myint, char mychar)
{
    struct MYSTRUCT mystruct;
    mystruct.myint = myint;
    mystruct.mychar = mychar;
    return mystruct;
}

int example_print_struct(struct MYSTRUCT mystruct)
{
    printf("mystruct: myint=%d mychar=%c\n", mystruct.myint, mystruct.mychar);
}

int example_add_function(int a, int b, int *result)
{
    *result = a + b;
    printf("Try to calculate: %d+%d=%d\n", a, b, *result);
    return 0;
}

int example_assign_struct_with_ptr(struct MYSTRUCT *mystruct, int myint, char mychar)
{
    mystruct->myint = myint;
    mystruct->mychar = mychar;
    return 0;
}
