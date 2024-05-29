#include <gtest/gtest.h>

#include "../src/project_euler/problems/p_0001.cpp"

int sum_divisible(int multiple, int divisor);
int p_0001(int below);

TEST(P0001Test, BasicTests)
{
    EXPECT_EQ(p_0001(1000), 233168);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
