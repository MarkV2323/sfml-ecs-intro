cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)

project(sfml-ecs-intro)

# Set target (app) compile flags
add_compile_options(-Wall)

# Set Sources
set(SOURCES
    src/main.cc
    src/tile.cc
    src/boundingBox.cc
    src/position.cc
)

# Setup SFML_PATH, must use \\ due to Windows!
set(SFML_PATH C:\\Users\\Mark\\Desktop\\cpp-apps\\lib\\SFML-2.6.1)

# Include our SFML headers, and link to our SFML lib files. 
include_directories(${SFML_PATH}\\include)
link_directories(${SFML_PATH}\\lib)

# Build Main Executable
add_executable(sfml-ecs-intro ${SOURCES})

# Specify what libs to link into our executable
target_link_libraries(sfml-ecs-intro sfml-system sfml-window sfml-graphics sfml-audio sfml-network sfml-main)
