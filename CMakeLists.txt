cmake_minimum_required(VERSION 3.21)
project(SpaDomacaZadaca01 LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(SpaDomacaZadaca01 src/main.cpp src/Flower.cpp src/Flower.h src/Wind.cpp src/Wind.h)
target_link_libraries(SpaDomacaZadaca01 PRIVATE sfml-graphics)
target_compile_features(SpaDomacaZadaca01 PRIVATE cxx_std_17)
if (WIN32 AND BUILD_SHARED_LIBS)
    add_custom_command(TARGET SpaDomacaZadaca01 POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:SpaDomacaZadaca01> $<TARGET_FILE_DIR:SpaDomacaZadaca01> COMMAND_EXPAND_LISTS)
endif()

install(TARGETS SpaDomacaZadaca01)
