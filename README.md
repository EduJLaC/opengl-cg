# OpenGL
Talleres realizados en el curso de Computación Gráfica.

## Proyecto
- Compilador: [MinGW](https://osdn.net/projects/mingw/releases/)
- IDE: [CLion by JetBrains](https://www.jetbrains.com/clion/)
- freeglut: [freeglut 3.0.0 MinGW Package](https://www.transmissionzero.co.uk/software/freeglut-devel/)

<br>

#### Plantilla de CMakeLists.txt
```cmake_minimum_required(VERSION 3.10)
project(proyecto)

set(CMAKE_CXX_STANDARD 14)

find_package (OpenGL REQUIRED)
find_package (GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR}  ${GLUT_INCLUDE_DIRS})

add_executable(proyecto *.cpp *.h *.c)


target_link_libraries (proyecto ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})```