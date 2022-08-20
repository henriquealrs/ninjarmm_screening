cmake_minimum_required(VERSION 3.5)

project(ninjarmm_screening LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

LIST(APPEND STEPS 3 5 )

foreach(S IN LISTS STEPS)
    SET(PROJ "step${S}")
    message(${PROJ})

    FILE(GLOB SRC
        "${PROJ}/*.cpp"
        "${PROJ}/*.hpp")
    add_executable(${PROJ} ${SRC})

endforeach(S IN RANGE 2 5)


