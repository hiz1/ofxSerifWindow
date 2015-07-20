cmake_minimum_required(VERSION 3.2)

file(GLOB SOURCE_FILES *.cpp)

add_library(ofxSerifWindow STATIC
  ${SOURCE_FILES}
)