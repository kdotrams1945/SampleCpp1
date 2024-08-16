#include "pch.h"
#include "SumSolution.h"
#include "Majority.h"
namespace leetcode_major {

	TEST(MajorityTest, Simplle2) {
		leetcode_majority::Solution b;
		vector<int> input3 = { 3,3, 2, 1, 1, 2, 1, 1, 2 };
		int output3 = b.majorityElement(input3);
		int wantedOutput3 = 1;
		EXPECT_EQ(wantedOutput3, output3);

	}
	TEST(MajorityTest, Simpllle) {
		leetcode_majority::Solution b;
		vector<int> input = { 3,2,3 };
		int output = b.majorityElement(input);
		int wantedOutput = 3;
		EXPECT_EQ(wantedOutput, output);
		vector<int> input2 = { 2, 2, 1, 1, 1, 2, 2 };
		int output2 = b.majorityElement(input2);
		int wantedOutput2 = 2;
		EXPECT_EQ(wantedOutput2, output2);
		

	}


};