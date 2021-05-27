#include <gtest/gtest.h>
#include "../fizzbuzz.h"
#include <string>

TEST(FizzBuzzTest, BasicAssertions){
    EXPECT_EQ(fizzbuzz(3),  "Fizz");
    EXPECT_EQ(fizzbuzz(5),  "Buzz");
    EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
    for(auto &x:{1,2,4,11,29,-7})
        EXPECT_EQ(fizzbuzz(x), std::to_string(x));
}

TEST(FizzBuzzTest, SomeFizz){
    for(int i = -99; i <= 100; ++i){
        for(int j = 0; j < 4; ++j)
            EXPECT_EQ(fizzbuzz(i++ * 3), "Fizz");
    }
}

TEST(FizzBuzzTest, SomeBuzz){
    for(int i = -101; i <= 100; ++i){
        EXPECT_EQ(fizzbuzz(i++ * 5), "Buzz");
        EXPECT_EQ(fizzbuzz(i++ * 5), "Buzz");
    }
}

TEST(FizzBuzzTest, SomeFizzBuzz){
    for(int i = -100; i <= 100; ++i)
        EXPECT_EQ(fizzbuzz(i * 15), "FizzBuzz");
}

TEST(FizzBuzzTest, SomeNumbers){
    for(int i = -100; i <= 100; ++i){
        if(i % 3 && i % 5)
            EXPECT_EQ(fizzbuzz(i), std::to_string(i));
    }
}
