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
