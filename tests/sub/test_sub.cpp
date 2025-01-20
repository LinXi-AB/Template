#include <gtest/gtest.h>
#include "sub/sub.h"

// ������������µļ���
TEST(SubFunctionTest, PositiveNumbers)
{
    EXPECT_EQ(sub::sub(5, 3), 2);  // 5 - 3 = 2
    EXPECT_EQ(sub::sub(10, 5), 5); // 10 - 5 = 5
}

// ���Ը�������
TEST(SubFunctionTest, NegativeNumbers)
{
    EXPECT_EQ(sub::sub(-10, 5), -15); // -10 - 5 = -15
    EXPECT_EQ(sub::sub(-5, -3), -2);  // -5 - (-3) = -2
}

// ���԰�����ļ���
TEST(SubFunctionTest, Zero)
{
    EXPECT_EQ(sub::sub(0, 0), 0); // 0 - 0 = 0
    EXPECT_EQ(sub::sub(5, 0), 5); // 5 - 0 = 5
    EXPECT_EQ(sub::sub(0, 7), -7); // 0 - 7 = -7
}
