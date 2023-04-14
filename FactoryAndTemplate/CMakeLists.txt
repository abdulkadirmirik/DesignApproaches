cmake_minimum_required(VERSION 3.0.0)

project(factoryandtemplate)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_executable(factoryandtemplate main.cpp
                                  basicdevice.hpp
                                  basicdevice.cpp
                                  extendeddevice.hpp
                                  extendeddevice.cpp
                                  device.cpp
                                  device.hpp)