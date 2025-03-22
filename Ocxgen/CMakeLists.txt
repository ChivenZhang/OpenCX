add_executable(Ocxgen main.cpp Klass.h)
add_dependencies(Ocxgen OpenCX OpenARGS)

target_include_directories(Ocxgen PUBLIC ${OPENCX_SOURCE_DIR}/External/OpenARGS)
target_link_libraries(Ocxgen PRIVATE OpenCX OpenARGS)

target_include_directories(Ocxgen PUBLIC ${CLANG_BINARY_DIR}/include)
target_link_directories(Ocxgen PRIVATE ${CLANG_BINARY_DIR}/lib)
target_link_libraries(Ocxgen PRIVATE libclang)
