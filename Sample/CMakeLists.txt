
add_executable(Sample main.cpp MyObject.h)

add_dependencies(Sample OpenCX)

target_link_libraries(Sample PRIVATE OpenCX)