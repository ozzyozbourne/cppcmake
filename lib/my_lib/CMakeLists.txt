set(LIBRARY_SOURCES src/print_hello_world.cpp )

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCES})
target_include_directories(${LIBRARY_NAME} PUBLIC include)
