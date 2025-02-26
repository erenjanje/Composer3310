add_executable(composer3310 "main.c")

target_include_directories(composer3310 PRIVATE "src")

add_subdirectory(arena)

target_link_libraries(composer3310 arena)

target_include_directories(composer3310 PRIVATE "arena/source")
