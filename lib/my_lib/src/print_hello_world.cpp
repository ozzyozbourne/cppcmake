#include <iostream>
#include <nlohmann/json.hpp>
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>
#include "my_lib/print_hello_world.h"

/**
 *@brief Print out the hello world and test the json library
 */
void print_hello_world()
{
    std::cout << "JSON LIB VERSION\t"
              << '.' << NLOHMANN_JSON_VERSION_MAJOR
              << '.' << NLOHMANN_JSON_VERSION_MINOR
              << '.' << NLOHMANN_JSON_VERSION_PATCH
              << '\n';

    std::cout << "FMT LIB VERSION\t\t"
              << '.' << FMT_VERSION
              << '\n';

    std::cout << "CXXOPTS LIB VERSION\t"
              << '.' << CXXOPTS__VERSION_MAJOR
              << '.' << CXXOPTS__VERSION_MINOR
              << '.' << CXXOPTS__VERSION_PATCH
              << '\n';

    std::cout << "SPDLOG LIB VERSION\t"
              << '.' << SPDLOG_VER_MAJOR
              << '.' << SPDLOG_VER_MINOR
              << '.' << SPDLOG_VER_PATCH
              << '\n';
}
