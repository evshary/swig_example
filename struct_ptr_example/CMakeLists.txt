find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

find_package(PythonLibs)
include_directories(${PYTHON_INCLUDE_PATH})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_SWIG_FLAGS "")

# If you use C++
#set_source_files_properties(example.i PROPERTIES CPLUSPLUS ON)

if (CMAKE_VERSION VERSION_LESS "3.8")
swig_add_module(example python example.i example.c)
else()
swig_add_library(example LANGUAGE python SOURCES example.i example.c)
endif()
swig_link_libraries(example ${PYTHON_LIBRARIES})

# Copy file to build
add_custom_target(link_target ALL COMMAND ${CMAKE_COMMAND} -E
                  copy "${CMAKE_SOURCE_DIR}/run_python.py" "${CMAKE_BINARY_DIR}/run_python.py")
