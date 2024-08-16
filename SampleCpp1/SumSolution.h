#pragma once
#include <vector>
using namespace std;
// solving :https://leetcode.com/problems/3sum/description/
namespace leetcode_3sum{
    class Solution
    {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            std::vector<std::vector<int>> triplets;
            std::sort(nums.begin(), nums.end());

            for (int i = 0; i < nums.size(); i++) {
                if (i > 0 && nums[i] == nums[i - 1]) continue;

                int left = i + 1;
                int right = nums.size() - 1;

                while (left < right) {
                    int sum = nums[i] + nums[left] + nums[right];

                    if (sum == 0) {
                        triplets.push_back({ nums[i], nums[left], nums[right] });

                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    }
                    else if (sum < 0) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }

            return triplets;
        }

        vector<int> doSomething(vector<int> x);
       /* vector<int> doSomething1(vector<int>& x);
        vector<int> doSomething2(vector<int> *x);
        vector<int> doSomething3(const vector<int>& x);
        vector<int> doSomething4(const <int>* x);
        vector<int>& doSomething5(vector<int>& x);*/
        
    };
};

