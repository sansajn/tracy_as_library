cmake_minimum_required(VERSION 3.16)
project(tracy-test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -O3)

# tracy support
find_package(Tracy REQUIRED)
find_package(Threads REQUIRED) # pthread

option(TRACY_ENABLE "" ON)

# sample
add_executable(main main.cpp)

# link Tracy client
target_link_libraries(main PRIVATE Threads::Threads)
target_link_libraries(main PUBLIC Tracy::TracyClient)
