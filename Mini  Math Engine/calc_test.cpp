#include "gtest/gtest.h"
#include "calc.hpp"
#include <iostream>
class CalcTest : public ::testing::Test
{
public:
    Calculator obj;
    // Sets up the test fixture.
    void SetUp() override
    {
        std::cout <<"Started"<<std::endl;
    }

    // Tears down the test fixture.
    void TearDown() override
    {
        std::cout <<"Finished"<<std::endl;
    }
};
TEST_F(CalcTest, TC_01)
{
    EXPECT_EQ(obj.calculate(5,'+',3), 8);
}

TEST_F(CalcTest, TC_02)
{
    EXPECT_EQ(obj.calculate(10,'-',7), 3);
}
TEST_F(CalcTest, TC_03)
{
    EXPECT_EQ(obj.calculate(4,'*',2), 8);
}
TEST_F(CalcTest, TC_04)
{
    EXPECT_EQ(obj.calculate(12,'/',3), 4);
}
TEST_F(CalcTest, TC_05)
{
    EXPECT_EQ(obj.calculate(10,'/',0), -1);
}
TEST_F(CalcTest, TC_06)
{
    EXPECT_EQ(obj.calculate('A','+',5), -1);
}
TEST_F(CalcTest, TC_07)
{
    EXPECT_EQ(obj.calculate(5,'%',5), -1);
}
TEST_F(CalcTest, TC_08)
{
    EXPECT_EQ(obj.calculate(5,'+','+'), 10);
}
TEST_F(CalcTest, TC_09)
{
    EXPECT_TRUE(obj.calculate(8,'>',5));
}

TEST_F(CalcTest, TC_10)
{
    EXPECT_TRUE(obj.calculate(3,'<',7));
}
TEST_F(CalcTest, TC_11)
{
    EXPECT_TRUE(obj.calculate(0,'=',0));
}
TEST_F(CalcTest, TC_12)
{
    EXPECT_FALSE(obj.calculate(1,'=',0));
}

