cmake_minimum_required(VERSION 3.10)
project(Primitivas)

set(CMAKE_CXX_STANDARD 14)

# Linux only
set(OpenGlLinkers -lglut -lGLU -lGL)

add_executable(Primitivas main.cpp recta/ejercicio71.cpp recta/algoritmos_recta.cpp
        recta/ejercicio72.cpp recta/ejercicio73.cpp circunferencia/algoritmos_circunferencia.cpp headerFiles/algrecta.h headerFiles/algcircun.h circunferencia/ejercicio131.cpp headerFiles/taller.h circunferencia/ejercicio132.cpp headerFiles/ej132.h headerFiles/algs.h circunferencia/ejercicio133.cpp headerFiles/ej133.h)

target_link_libraries(Primitivas ${OpenGlLinkers})