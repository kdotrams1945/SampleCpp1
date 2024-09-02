#pragma once
using namespace std;
namespace leetcode_intersection {
    class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            std::vector<int> in_common;
            for (int i = 0; i < nums1.size(); i++) {
                if (std::find(nums2.begin(), nums2.end(), nums1[i]) !=
                    nums2.end()) {
                    if (std::find(in_common.begin(), in_common.end(), nums1[i]) ==
                        in_common.end()) {
                        in_common.push_back(nums1[i]);
                    }
                }
            }

            return in_common;
        }
    };
};