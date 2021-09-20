# make a library with cpp files
add_library(GV STATIC gv.cpp)

# declare header files path for circle.cpp
target_include_directories(GV PUBLIC ${CMAKE_SOURCE_DIR}/include)
