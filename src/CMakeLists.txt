# Создание библиотеки
add_library(starship
    datatypes.h datatypes.cpp
    interfaces.h interfaces.cpp
    implementations.h implementations.cpp
    adaptors.h adaptors.cpp
    commands.h commands.cpp
    starship.h
)

# Интерфейс библиотеки (заголовки)
target_include_directories(starship PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

