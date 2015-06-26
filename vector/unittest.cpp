#include <iostream>
#include "gtest/gtest.h"
#include "myvector.h"
using namespace std;

TEST(myvectorTest, handle_int)
{
    FrankZhang::vector<int> v1;
    for (int i = 1; i <= 10; ++i)
    {
        v1.push_back(i);
    }
    EXPECT_EQ(1, v1[0]);
    EXPECT_EQ(10, v1.size());
    EXPECT_EQ(12, v1.capacity());
}

TEST(myvectorTest, handle_char)
{
    FrankZhang::vector<char> v2;
    char c[] = {'a','b','c','d','e'};
    for (int i = 0; i < 5; ++i)
    {
        v2.push_back(c[i]);
    }
    EXPECT_EQ('a', v2[0]);
    EXPECT_EQ(5, v2.size());
    EXPECT_EQ(6, v2.capacity());
}

TEST(myvectorTest, handle_double)
{
    FrankZhang::vector<double> v3;
    double d[] = {1.0, 2.0, 3.95, 4.96, 9.88, 3.02, 6.55};
    for (int i = 0; i < 7; ++i)
    {
        v3.push_back(d[i]);
    }
    EXPECT_EQ(6.55, v3[6]);
    EXPECT_EQ(7, v3.size());
    EXPECT_EQ(12, v3.capacity());
}

TEST(myvectorTest, handle_bool)
{
    FrankZhang::vector<bool> v4;
    bool b[] = {false, true, true, false};
    for (int i = 0; i < 4; ++i)
    {
        v4.push_back(b[i]);
    }
    EXPECT_EQ(false, v4[0]);
    EXPECT_EQ(4, v4.size());
    EXPECT_EQ(6, v4.capacity());
}

TEST(myvectorTest, empty)
{
    FrankZhang::vector<int> v5;
    EXPECT_EQ(true, v5.empty());

    v5.push_back(125);
    EXPECT_EQ(false, v5.empty());
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

