cmake_minimum_required(VERSION 3.30)

project(composer3310)

if (MSVC)
    add_compile_options(/W4 /WX)
else ()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror -fanalyzer -Wanalyzer-too-complex)
endif ()

set(CMAKE_C_STANDARD 99)

add_subdirectory(src)

