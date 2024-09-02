#include "Header1.h"
namespace leetcode_maj {

	TEST(MajorityTest, Simplle3) {
		leetcode_intersection::Solution b;
		vector<int> input3 = { 4,9,5};
		vector<int> input4 = { 9,4,9,8,4 };
		vector<int> output3 = b.intersection(input3,input4);
		vector<int> wantedOutput3 = { 4,9 };
		EXPECT_EQ(wantedOutput3, output3);

	}


};