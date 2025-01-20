# =========================================
# 1. 设置最低 CMake 版本要求和项目信息
# =========================================
cmake_minimum_required(VERSION 3.10)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# =========================================
# 2. 配置编译选项、标准等
# =========================================

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 可选：设置编译优化选项
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
else()
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
endif()

# 没有这两行代码VS可能会报链接错误
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

# =========================================
# 3. 设置构建输出目录为build
# =========================================

# 设置构建输出路径
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

# 设置中间文件输出路径
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)     # 静态库的输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)     # 动态库的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)     # 可执行文件的输出目录

# =========================================
# 4. 启用测试功能，下载并启用GoogleTest
# =========================================

# 设置下载目录为 3rdparty/GoogleTest
set(FETCHCONTENT_BASE_DIR ${CMAKE_SOURCE_DIR}/3rdparty/GoogleTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)
enable_testing()

# =========================================
# 5. 将模块加入构建目录
# =========================================
add_subdirectory(src)
add_subdirectory(tests)

# =========================================
# 6. 设置安装规则
# =========================================

# =========================================
# 7. 打包与生成 CPack 配置（如果需要的话）
# =========================================
