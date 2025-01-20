#include <gtest/gtest.h>
#include "add/add.h"

// ������������µļӷ�
TEST(AddFunctionTest, PositiveNumbers)
{
    EXPECT_EQ(add::add(1, 1), 2);   // 1 + 1 = 2
    EXPECT_EQ(add::add(10, 5), 15); // 10 + 5 = 15
}

// ���Ը����ӷ�
TEST(AddFunctionTest, NegativeNumbers)
{
    EXPECT_EQ(add::add(-1, -1), -2); // -1 + -1 = -2
    EXPECT_EQ(add::add(-5, 3), -2);  // -5 + 3 = -2
}

// ���԰�����ļӷ�
TEST(AddFunctionTest, Zero)
{
    EXPECT_EQ(add::add(0, 0), 0); // 0 + 0 = 0
    EXPECT_EQ(add::add(5, 0), 5); // 5 + 0 = 5
    EXPECT_EQ(add::add(0, -7), -7); // 0 + -7 = -7
}
