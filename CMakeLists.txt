cmake_minimum_required(VERSION 3.10)
project(ObjectDetection)

# Require C++17
set(CMAKE_CXX_STANDARD 17)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS} include)

# Add source files
add_executable(object_detection src/main.cpp)

# Link OpenCV libraries
target_link_libraries(object_detection ${OpenCV_LIBS})
