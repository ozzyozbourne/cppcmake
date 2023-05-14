set(LIBRARY_SOURCES src/print_hello_world.cpp )

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCES})
target_include_directories(${LIBRARY_NAME} PUBLIC include)
target_link_libraries(${LIBRARY_NAME} PUBLIC 
    cxxopts::cxxopts
    nlohmann_json::nlohmann_json
    fmt::fmt
    spdlog::spdlog)
