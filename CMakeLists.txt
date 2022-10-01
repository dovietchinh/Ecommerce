cmake_minimum_required(VERSION 3.16)
project(test)
set(CMAKE_CXX_STANDARD 17)

include_directories(source)

find_package(OpenCV)
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(app ${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp)
target_link_libraries(app ${OpenCV_LIBS} gflags)

set(L1 "chatsessions"
        "orders"
        "payments"
        "prices"
        "product"
        "producttypes"
        "promotions"
        "provider"
        "store"
        "users"
)

foreach(module ${L1} )
    message(STATUS "this is " ${module})
    add_subdirectory(source/${module})
    include_directories(source/${module})
endforeach()

add_subdirectory(source/test)




