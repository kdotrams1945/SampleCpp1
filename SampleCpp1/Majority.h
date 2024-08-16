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
            stack<int> s;
            
            for (int num : nums) {
                
                if (s.empty()) {
                    s.push(num);
                }
                else {
                    
                    if (s.top() == num) {
                        s.push(num);
                    }
                    else {
                        s.pop();
                    }
                }
            }
            return s.top();
		}
	};
};

