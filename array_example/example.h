#ifndef _EXAMPLE_H_
#define _EXAMPLE_H_

/* sturcture */
struct MYSTRUCT {
    int myint;
    char mychar;
};
struct MYSTRUCT example_assign_struct(int myint, char mychar);
int example_assign_struct_with_ptr(struct MYSTRUCT *mystruct, int myint, char mychar);

/* array */
void example_print_double_array(double *darray, int num);

/* structure + array */
int example_print_struct_array(struct MYSTRUCT *sarray, int num);
struct MYSTRUCT* example_get_struct_array(int *num);

#endif /*_EXAMPLE_H_*/
