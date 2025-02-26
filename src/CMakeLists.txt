add_executable(composer3310 "main.c")

target_include_directories(composer3310 PRIVATE "src")

add_subdirectory(taban)

target_link_libraries(composer3310 taban)

target_include_directories(composer3310 PRIVATE "taban")
