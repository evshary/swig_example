#!/usr/bin/env python3
import example

# ----- Structure -----
mystruct = example.MYSTRUCT()
mystruct.myint = 2;
mystruct.mychar = 'a';
example.example_print_struct(mystruct)
mystruct1 = example.example_assign_struct(10, 'e')
example.example_print_struct(mystruct1)

# ----- Pointer -----
# Generate pointer for int *
myvalue = example.new_intptr()
# Add the value
example.example_add_function(1, 2, myvalue)
# Dereference the value
print("result=%d" % example.intptr_value(myvalue))
# Release the pointer
example.delete_intptr(myvalue)

# ----- Structure+Pointer -----
# Generate pointer for struct MYSTRUCT
mystruct2 = example.new_mystructptr()
# Call the function to get value
example.example_assign_struct_with_ptr(mystruct2, 7, 'y')
# Dereference the value
example.example_print_struct(example.mystructptr_value(mystruct2))
# Release the pointer
example.delete_mystructptr(mystruct2)
