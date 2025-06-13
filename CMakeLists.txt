cmake_minimum_required(VERSION 3.10)
project(FlowerShop)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(app)

add_library(FlowerShopLib SHARED
    src/Flower.cpp
    src/Tulip.cpp
    src/Rose.cpp
    src/DutchTulip.cpp
    src/GardenRose.cpp
    src/Bouquet.cpp
    app/DutchTulipFactory.cpp
    app/GardenRoseFactory.cpp
)

add_executable(MainApp main.cpp)
target_link_libraries(MainApp FlowerShopLib)
