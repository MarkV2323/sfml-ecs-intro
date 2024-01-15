cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)

project(sfml-ecs-intro)

# Setup SFML_PATH, must use \\ due to Windows!
set(SFML_PATH C:\\Users\\Mark\\Desktop\\cpp-apps\\lib\\SFML-2.6.1)

# Set Headers
set (HEADERS 
    src/entity/tile.h
    src/component/boundingBox.h
    src/component/transform.h
    src/component/shape.h
)

# Set Sources
set(SOURCES
    ${HEADERS}
    src/main.cc
    src/entity/tile.cc
    src/component/boundingBox.cc
    src/component/transform.cc
    src/component/shape.cc
)

# Build Main Executable (Our Target)
add_executable(sfml-ecs-intro ${SOURCES})

# Inlcude our internal headers, SFML headers
target_include_directories(sfml-ecs-intro PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_include_directories(sfml-ecs-intro PRIVATE ${SFML_PATH}/include)
target_link_directories(sfml-ecs-intro PRIVATE ${SFML_PATH}/lib) 

# Specify what sfml-libs to link into our target
target_link_libraries(sfml-ecs-intro sfml-system sfml-window sfml-graphics sfml-audio sfml-network sfml-main)