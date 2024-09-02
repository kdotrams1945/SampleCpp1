#include "pch.h"
#include "sqrt.h"
namespace leetcode_sqrt {

	TEST(SquareRootTest, First) {
		leetcode_sqrt::Solution b;
		int a = b.mySqrt(9);
		EXPECT_EQ(3, a);

	}
	TEST(SquareRootTest, LittleAbove) {
		leetcode_sqrt::Solution b;
		int a = b.mySqrt(10);
		EXPECT_EQ(3, a);

	}
	TEST(SquareRootTest, Third) {
		leetcode_sqrt::Solution b;
		int a = b.mySqrt(2147483647);
		EXPECT_EQ(46340, a);

	}

};