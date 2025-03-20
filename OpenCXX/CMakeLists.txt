
add_executable(OpenCXX main.cpp
        Klass.h)

add_dependencies(OpenCXX OpenCX OpenARGS)

target_include_directories(OpenCXX PUBLIC ${OPENCX_SOURCE_DIR}/External/OpenARGS)

target_link_libraries(OpenCXX PRIVATE OpenCX OpenARGS)