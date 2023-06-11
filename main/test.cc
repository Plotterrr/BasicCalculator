//
//
#include <include/gtest/gtest.h>
#include <cmath>
#include "main/Calculation.h"
Calculation cal;
TEST(IsQualifiedTest, Number) {
    EXPECT_FALSE(cal.isQualified(999));
    EXPECT_TRUE(cal.isQualified(1.02));
    EXPECT_TRUE(cal.isQualified(2));
}

TEST(IsNumber, Number) {
    EXPECT_TRUE(cal.isNumber("999"));
    EXPECT_TRUE(cal.isNumber("2.0"));
    EXPECT_FALSE(cal.isNumber("abc"));
    EXPECT_FALSE(cal.isNumber("1........5"));
}

TEST(OperationTest, Add) {
    EXPECT_TRUE(cal.validOp('+'));
}

TEST(OperationTest, Substract) {
    EXPECT_TRUE(cal.validOp('-'));
    EXPECT_FALSE(cal.validOp('a'));
}

TEST(Calculate, Add) {
    EXPECT_DOUBLE_EQ(3.9,cal.calculate('+',1.9,2));
    EXPECT_DOUBLE_EQ(4,cal.calculate('+',2,2));
}

TEST(Calculate, Substract) {
    EXPECT_DOUBLE_EQ(2.9,cal.calculate('-',3.9,1));
    EXPECT_DOUBLE_EQ(2,cal.calculate('-',4,2));
}

TEST(ResultTest, Infinity) {
    EXPECT_TRUE(cal.isValid(0));
    EXPECT_TRUE(cal.isValid(3.0));
    EXPECT_FALSE(cal.isValid(std::numeric_limits<double>::infinity()));
    EXPECT_FALSE(cal.isValid(-std::numeric_limits<double>::infinity()));
    EXPECT_FALSE(cal.isValid(std::sqrt(-1)));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}