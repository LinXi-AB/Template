# ==============================
# 1. 生成可执行文件
# ==============================
file(GLOB SOURCES "*.cpp")
add_executable(test_add ${SOURCES})

# ==============================
# 2. 链接库
# ==============================
target_link_libraries(test_add PRIVATE GTest::gtest_main add)

# ==============================
# 3. 包含头文件目录
# ==============================
target_include_directories(test_add PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

# ==============================
# 4.启用GoogleTest
# ==============================
include(GoogleTest)
gtest_discover_tests(test_add)