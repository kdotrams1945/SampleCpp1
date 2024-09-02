#pragma once
#include <vector>
#include <stack>
using namespace std;
//https://leetcode.com/problems/majority-element/description/
namespace leetcode_majority {
	class Solution
	{
	public:
        int majorityElement(vector<int>& nums) {
            map<int, int> counter;
            for (int i = 0; i < nums.size(); i++) {
                counter[nums[i]]++;
            }
            int majority = nums[0];
            int maxCount = 0;
            for (auto it = counter.begin(); it != counter.end(); ++it) {
                if (it->second > maxCount) {
                    maxCount = it->second;
                    majority = it->first;
                }
            }

            return majority;
        }
	};
};

