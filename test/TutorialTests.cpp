#include <gtest/gtest.h>
#include "../tutorial1.hpp"

TEST (Tutorial_Abs_Test, abs){
    int x = 5;
    int expectedAbs = x;
    EXPECT_EQ(expectedAbs, abs(x));
}

TEST(Tutorial_kuadrat_TEST, kuadrat){
    int x = 4;
    int expectedKuadrat = x*x;
    EXPECT_EQ(expectedKuadrat, kuadrat(x));
}

TEST (Tutorial_fibo_TEST, fibo){
    int x = 5;
    int expectedfibo = 5;
    EXPECT_EQ(expectedfibo, fibo(x));
}

TEST (Tutorial_max_TEST, max){
    int x = 3;
    int y = 5;
    int expectedmax = 5;
    EXPECT_EQ(expectedmax, max(x,y));
}