
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
    include_directories(${CMAKE_SOURCE_DIR}source/${module})
endforeach() 
include_directories(${CMAKE_SOURCE_DIR}source/)

add_library(store store.cpp)