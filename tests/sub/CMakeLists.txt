# ==============================
# 1. 生成可执行文件
# ==============================
file(GLOB SOURCES "*.cpp")
add_executable(test_sub ${SOURCES})

# ==============================
# 2. 链接库
# ==============================
target_link_libraries(test_sub PRIVATE GTest::gtest_main sub)

# ==============================
# 3. 包含头文件目录
# ==============================
target_include_directories(test_sub PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

# ==============================
# 4.启用GoogleTest
# ==============================
include(GoogleTest)
gtest_discover_tests(test_sub)