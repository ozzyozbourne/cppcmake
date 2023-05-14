#include "my_lib/print_hello_world.h"
#include <nlohmann/json.hpp>
#include <iostream>

int main()
{
    print_hello_world();
    std::cout << "JSON LIB VERSION"
              << '\t' << NLOHMANN_JSON_VERSION_MAJOR
              << '\t' << NLOHMANN_JSON_VERSION_MINOR
              << '\t' << NLOHMANN_JSON_VERSION_PATCH
              << '\t' << '\n';
    return 0;
}
