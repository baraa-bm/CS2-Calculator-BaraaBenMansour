cmake_minimum_required(VERSION 3.10)
project(CS2_Calculator_BaraaBenMansour)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(CS2_Calculator_BaraaBenMansour 
    calculator.cpp 
    test.cpp
)

# For Windows, might need to link against additional libraries
if(WIN32)
    target_link_libraries(CS2_Calculator_BaraaBenMansour)
endif()
