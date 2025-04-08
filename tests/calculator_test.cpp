#include <gtest/gtest.h>
#include "calculator.h"

class CalculatorTest : public ::testing::Test {
	protected:
		void SetUp() override {
			// 測試前會自動呼叫，可初始化共用狀態
			a = 2;
			b = 3;
			zero = 0;
		}
	
		// 可以在測試中使用這些變數
		int a;
		int b;
		int zero;
	};

TEST_F(CalculatorTest, AddTest) {
    EXPECT_EQ(add(a, b), 5);
}

TEST_F(CalculatorTest, SubTest) {
    EXPECT_EQ(sub(a, b), -1);
}

TEST_F(CalculatorTest, MultiTest) {
	EXPECT_EQ(multi(a, b), 6);
}

TEST_F(CalculatorTest, DivideTest) {
    EXPECT_EQ(divide(a, b), a/b);
}

TEST_F(CalculatorTest, DivideByZeroTest) {
    EXPECT_THROW(divide(a, zero), std::invalid_argument);
}

