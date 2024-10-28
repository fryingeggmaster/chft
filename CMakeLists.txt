# CMakeLists.txt for organizing the HFT project

cmake_minimum_required(VERSION 3.10)
project(HFTProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find Boost
find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# Include directories
include_directories(src)  # Add src directory here
include_directories(${Boost_INCLUDE_DIRS})

# Source files
file(GLOB SRC src/*.cpp)  # Use file(GLOB ...) to include all .cpp files

set(TEST_SMA_SRC tests/test_sma.cpp)
set(TEST_OMS_SRC tests/test_oms.cpp)

# Create a library from the SMA source files
add_library(chtf STATIC ${SRC})

# Test target
add_executable(test_sma ${TEST_SMA_SRC})
target_link_libraries(test_sma ${Boost_LIBRARIES} chtf)

add_executable(test_oms ${TEST_OMS_SRC})
target_link_libraries(test_oms ${Boost_LIBRARIES} chtf)

# Enable testing
enable_testing()
add_test(NAME TestSMA COMMAND test_sma)
add_test(NAME TestOMS COMMAND test_oms)