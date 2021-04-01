#ifndef _EXAMPLE_H_
#define _EXAMPLE_H_

/* sturcture */
struct MYSTRUCT {
    int myint;
    char mychar;
};
struct MYSTRUCT example_assign_struct(int myint, char mychar);
int example_print_struct(struct MYSTRUCT mystruct);

/* pointer */
int example_add_function(int a, int b, int *result);

/* structure + pointer */
int example_assign_struct_with_ptr(struct MYSTRUCT *mystruct, int myint, char mychar);

#endif /*_EXAMPLE_H_*/
