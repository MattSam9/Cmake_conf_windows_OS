# if cmake app has a specified version that is below than this one we declared in that case can't work correctly!!!
cmake_minimum_required(VERSION 3.0)

# project name and version
project(stl VERSION 0.1.0)

# specify the c++ standard version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# by this command cmake produce compiler_commands.json file in build folder and we move it to first folder
# by this JSON configuration main.cpp can access to header files and autocompletion use it.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

# specify compiler flags for debug or release mode
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall -Wextra -pedantic-errors -g3")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall -Wextra -pedantic-errors")

# by this command we define executable name (in this case project() value is chosen) that is stl and address that to the file that has main() function 
add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/stl.cpp)

# define linker relation between main and other function in other cpp files in libraries (in this case gv.cpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib) ## value inside of () is folder name of subdirectory
target_link_libraries(${PROJECT_NAME} PUBLIC GV) # value inside of () is 3 part and inheritence relation between stl.cpp and classes in library

# declare header files path for stl.cpp that is replace with variable name ${PROJECT_NAME} = stl
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
