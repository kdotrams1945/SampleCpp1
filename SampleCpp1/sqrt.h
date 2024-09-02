#pragma once
namespace leetcode_sqrt {
    class Solution {
    public:
        int mySqrt(int y) {
            long x = y;
            if (x == 1 || x == 0)
                return x;
            auto start =1;
         
            long end = x;
            while (start <= end) {
                long mid = start + ((end - start) / 2);
                auto result = mid * mid;
                if (result <=  0) {
                    // overflow
                    end = mid - 1;
                }
                else if (result > x)
                    end = mid - 1;
                else if (result == x)
                    return mid;
                else
                    start = mid + 1;
            }
            return end;
        }
    
    };
}