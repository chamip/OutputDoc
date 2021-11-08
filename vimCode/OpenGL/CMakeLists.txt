cmake_minimum_required(VERSION 3.20)
project(OpenGL)

set(CMAKE_CXX_STANDARD 14)

add_executable(OpenGL
        examGlfw.cpp
        glad.c
        OpenGL.c
        OpenGLLight.c
        OpenGLPlanet.c
        OpenGLsin.c
        test.cpp)
