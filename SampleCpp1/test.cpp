#include "pch.h"
#include "SumSolution.h"
#include "Majority.h"
namespace SumTests {
	TEST(TestCaseName, TestName) {
		EXPECT_EQ(1, 1);
		EXPECT_TRUE(true);
	}

	TEST(SumSolutionTest, Simple) {
		leetcode_3sum::Solution a;
		vector<int> input = { -1, 0, 1, 2, -1, -4 };
		vector<vector<int>> output = a.threeSum(input);
		//[[-1, -1, 2], [-1, 0, 1]]
		vector<vector<int>> wantedOutput = { {-1, -1, 2},{-1, 0, 1} };
		EXPECT_EQ(wantedOutput, output);
		vector<vector<int>> unwanted = { {-1, 2, 2},{-1, 0, 1} };
		EXPECT_NE(unwanted, output);
	}

}