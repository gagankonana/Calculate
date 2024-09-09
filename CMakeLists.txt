cmake_minimum_required(VERSION 3.14)
project(Caclulate)
add_executable(Caclulate main.cpp)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

# add_executable(CalculateApp main.cpp)
# target_include_directories(CalculateApp PRIVATE ${PROJECT_SOURCE_DIR})
# find_package(GTest REQUIRED)
# include_directories(googletest/include())  # Var managed by CMake

## Add GTest required libraries to linker
link_libraries(${GTEST_LIBRARIES} gtest_main pthread)

target_link_libraries(Caclulate ${GTEST_LIBRARIES} pthread)
enable_testing()

# add_executable(
#   main.cpp
# )
# target_link_libraries(
#   GTest::gtest_main
# )

include(GoogleTest)
gtest_discover_tests(main)