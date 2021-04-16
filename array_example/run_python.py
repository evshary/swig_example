#!/usr/bin/env python3
import example

array_len = 5

# ----- Array -----
darray = example.new_doubleArray(array_len)
for i in range(0, array_len):
    example.doubleArray_setitem(darray, i, i * 0.1)
example.example_print_double_array(darray, array_len)
example.delete_doubleArray(darray)

# ----- Another Array -----
darray2 = example.doubleArray2(array_len)
for i in range(0, array_len):
    darray2[i] = i * 0.2
example.example_print_double_array(darray2, array_len)

# ----- struct Array -----
sarray = example.new_structArray(array_len)
for i in range(0, array_len):
    # Use function
    #mystruct = example.example_assign_struct(i, 'a')
    # Create structure variable
    mystruct = example.MYSTRUCT()
    mystruct.myint = i;
    mystruct.mychar = 'a';
    example.structArray_setitem(sarray, i, mystruct)
example.example_print_struct_array(sarray, array_len)

# ----- Another struct Array (No suggest) -----
sarray2 = example.structArrayClass(array_len) 
print(dir(sarray2))
for i in range(0, array_len):
    # Notice that we can't do this, the number can't be assigned.
    # Documentation said "Pointers and other complicated types are not allowed."
    #sarray2[i].myint = i
    #sarray2[i].mychar = 'a'
    mystruct = example.example_assign_struct(i, 'a')
    example.structArray_setitem(sarray2, i, mystruct)
example.example_print_struct_array(sarray2, array_len)

# ----- struct array and transfer ownership -----
array_num_ptr = example.new_intptr()
# get array
sarray_ptr = example.example_get_struct_array(array_num_ptr)
# from array to list
sarray3 = example.structArrayClass.frompointer(sarray_ptr)
# get array number
array_num = example.intptr_value(array_num_ptr)
example.delete_intptr(array_num_ptr)
for i in range(0, array_num):
    print("[%d] %d %c" % (i, sarray3[i].myint, sarray3[i].mychar))

