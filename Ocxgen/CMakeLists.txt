
add_executable(Ocxgen main.cpp Klass.h)

add_dependencies(Ocxgen OpenCX OpenARGS)

target_include_directories(Ocxgen PUBLIC ${OPENCX_SOURCE_DIR}/External/OpenARGS)

target_link_libraries(Ocxgen PRIVATE OpenCX OpenARGS)

find_package(LLVM CONFIG REQUIRED)

list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
include(HandleLLVMOptions)
add_definitions(${LLVM_DEFINITIONS})

target_include_directories(Ocxgen PRIVATE ${LLVM_INCLUDE_DIRS})

# Find the libraries that correspond to the LLVM components that we wish to use
llvm_map_components_to_libnames(llvm_libs Support Core IRReader ...)

# Link against LLVM libraries
target_link_libraries(Ocxgen PRIVATE ${llvm_libs})