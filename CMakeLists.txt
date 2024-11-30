cmake_minimum_required(VERSION 3.16)

project(AdventureGame)

# Указываем стандарт C++
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Добавляем пути поиска библиотек для Apple Silicon
if(APPLE)
    set(CMAKE_PREFIX_PATH "/opt/homebrew")
endif()

# Включаем SDL2 и SDL2_image
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Указываем, где искать заголовочные файлы
include_directories(
    ${SDL2_INCLUDE_DIRS}
    /opt/homebrew/Cellar/sdl2/2.30.9/include
    /opt/homebrew/Cellar/sdl2_image/2.8.2_2/include
    /opt/homebrew/Cellar/sdl2/2.30.9/include/SDL2
    ${CMAKE_SOURCE_DIR}/game
    ${CMAKE_SOURCE_DIR}/system
    ${CMAKE_SOURCE_DIR}/json
)

# Указываем все исходные файлы
set(SOURCES
    main.c
    system/init.c
    system/input.c
    system/draw.c
    system/textures.c
    game/player.c
    game/map.c
    game/entities.c
    game/dungeon.c
    json/cJSON.c
)

# Создаём исполняемый файл
add_executable(AdventureGame ${SOURCES})

# Линкуем SDL2 и SDL2_image
target_link_libraries(AdventureGame
    ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES}
)