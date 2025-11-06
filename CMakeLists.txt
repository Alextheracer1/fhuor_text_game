cmake_minimum_required(VERSION 3.16)
project(fhuor_text_game LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Executable + all your .cpp files
add_executable(fhuor_text_game
    src/main.cpp
    "src/Classes (cpp_hpp files)/player.cpp"
    "src/Classes (cpp_hpp files)/waifu.cpp"
    "src/Classes (cpp_hpp files)/eun_bi.cpp"
)

# Where headers can be found (so your #include lines resolve)
target_include_directories(fhuor_text_game PRIVATE
    "${CMAKE_SOURCE_DIR}/src"
    "${CMAKE_SOURCE_DIR}/src/Classes (cpp_hpp files)"
)
