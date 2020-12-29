cmake_minimum_required(VERSION 3.10)
project(Intro)

set(CMAKE_CXX_STANDARD 14)

# Linux only
#set(OpenGlLinkers -lglut -lGLU -lGL)

find_package (OpenGL REQUIRED)
find_package (GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR}  ${GLUT_INCLUDE_DIRS})

add_executable(Intro main.cpp ej1.cpp ej2.cpp ej3.cpp taller.h)
target_link_libraries (Intro ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})
#target_link_libraries(Intro ${OpenGlLinkers})