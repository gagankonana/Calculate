#include <cmath>
#include <iostream>
#include "calculator.h"
#include <cassert>
#include <gtest/gtest.h>

TEST(CaculatorTest, add) {
    ASSERT_EQ(calculator::add(1, 2), 3);
    ASSERT_EQ(calculator::add(0, 0), 0);
    ASSERT_EQ(calculator::add(1, -1),0);
    ASSERT_EQ(calculator::add(-1, -1),-2);
}

TEST(CaculatorTest, exponentiate) {
    ASSERT_DOUBLE_EQ(calculator::exponentiate(1, 2), 3);
    ASSERT_DOUBLE_EQ(calculator::exponentiate(0, 0), 0);
    ASSERT_DOUBLE_EQ(calculator::exponentiate(1, -1),0);
    ASSERT_DOUBLE_EQ(calculator::exponentiate(-2, -1),-0.5);
}

class Test {
public:
    Test() {}
    static Test getIntance() {
        static Test instance;
        return instance;
    }
    void TEST_ADD() {
        assert(calculator::add(1, 2) == 3);
        assert(calculator::add(0, 0) == 0);
        assert(calculator::add(1, -1) == 0);
        assert(calculator::add(-1, -1) == -2);
    }
    void TEST_SUBTRACT() {
        assert(calculator::subtract(1, 2) == -1);
        assert(calculator::subtract(0, 0) == 0);
        assert(calculator::subtract(1, -1) == 2);
        assert(calculator::subtract(-1, -1) == 0);
    }
    void TEST_MULTIPLE() {
        assert(calculator::multiply(1, 2) == 2);
        assert(calculator::multiply(0, 0) == 0);
        assert(calculator::multiply(1, -1) == -1);
        assert(calculator::multiply(-1, -1) == 1);
    }

    void TEST_EXPONENTIATE() {
        assert(calculator::exponentiate(1, 2) == 1);
        assert(calculator::exponentiate(0, 0) == 1);
        assert(calculator::exponentiate(1, -1) == 1);
        assert(calculator::exponentiate(-1, -2) == 1);
         assert(calculator::exponentiate(-2, -1) == -0.5);
    }
    void RUN_ALL_TEST() {
        TEST_ADD();
        TEST_SUBTRACT();
        TEST_MULTIPLE();
        TEST_EXPONENTIATE();
        std::cout << "RAN ALL TESTS" << std::endl;
    }
};

int main() {
    // Test::getIntance().RUN_ALL_TEST();
    // int x = calculator::exponentiate(2, 1);
    // std::cout << calculator::exponentiate(-1.0, -2.0)<<std::endl;
    return RUN_ALL_TESTS();
    // return 1;
}