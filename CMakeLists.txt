cmake_minimum_required(VERSION 3.10)
project(FlowerFactory_QT)

# Указываем путь к Qt 6.9.1 (ваш путь может немного отличаться)
set(Qt6_DIR "D:/Qt/6.9.1/mingw_64/lib/cmake/Qt6")  # Для MinGW
# ИЛИ для MSVC:
# set(Qt6_DIR "D:/Qt/6.9.1/msvc2019_64/lib/cmake/Qt6")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# ... остальная часть вашего CMakeLists.txt ...

# Указываем пути к исходным файлам
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Bouquet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/DutchTulip.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Flower.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/GardenRose.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Rose.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Tulip.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/MainWindow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/app/DutchTulipFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/app/GardenRoseFactory.cpp
)

# Указываем пути к заголовочным файлам
set(HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Bouquet.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/DutchTulip.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/DutchTulipFactory.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Flower.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/FlowerFactory.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/GardenRose.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/GardenRoseFactory.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Rose.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Tulip.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/MainWindow.h
)

# Если у вас есть .ui файлы, добавьте их здесь
set(FORMS
     ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.ui  # Раскомментируйте, если есть UI-файлы
)

# Создаем исполняемый файл
add_executable(FlowerShop
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

# Подключаем необходимые библиотеки Qt
target_link_libraries(FlowerShop PRIVATE Qt6::Widgets)

# Добавляем директории с заголовками
target_include_directories(FlowerShop PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/app
    ${CMAKE_CURRENT_BINARY_DIR}
)