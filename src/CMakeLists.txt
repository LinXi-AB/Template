# ==============================
# 1. 包含各模块目录
# ==============================
add_subdirectory(add) 
add_subdirectory(sub) 

# ==============================
# 2. 生成可执行文件
# ==============================
add_executable(main_exe main.cpp)

# ==============================
# 3. 链接库
# ==============================
target_link_libraries(main_exe PRIVATE add sub)

# ==============================
# 4. 包含头文件目录
# ==============================
target_include_directories(main_exe PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/include
)
