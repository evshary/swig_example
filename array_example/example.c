#include <stdio.h>
#include "example.h"

struct MYSTRUCT example_assign_struct(int myint, char mychar)
{
    struct MYSTRUCT mystruct;
    mystruct.myint = myint;
    mystruct.mychar = mychar;
    return mystruct;
}

int example_assign_struct_with_ptr(struct MYSTRUCT *mystruct, int myint, char mychar)
{
    mystruct->myint = myint;
    mystruct->mychar = mychar;
    return 0;
}

void example_print_double_array(double *darray, int num) {
    for (int i = 0; i < num; i++) {
        printf("[%d]=%g\n", i, darray[i]);
    }
}

int example_print_struct_array(struct MYSTRUCT *sarray, int num)
{
    for (int i = 0; i < num; i++) {
        printf("[%d]: myint=%d mychar=%c\n", i, sarray[i].myint, sarray[i].mychar);
    }
}

struct MYSTRUCT* example_get_struct_array(int *num)
{
    int array_len = 5;
    *num = array_len;
    struct MYSTRUCT *sptr = (struct MYSTRUCT *) malloc(sizeof(struct MYSTRUCT) * array_len);
    for (int i = 0; i < array_len; i++) {
        sptr[i].myint = i;
        sptr[i].mychar = 'a'+i;
    }
    return sptr;
}
