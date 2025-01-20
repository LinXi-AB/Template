# ==================================
# 1.将当前模块编译为库并放在 lib 文件夹中
# ==================================

# 构建库
file(GLOB SOURCES "*.cpp")
add_library(add STATIC ${SOURCES})

# 设置库输出路径
set_target_properties(add PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/add
)

# ==================================
# 2.指定该模块头文件包含路径
# ==================================
target_include_directories(add PUBLIC ${CMAKE_SOURCE_DIR}/include)