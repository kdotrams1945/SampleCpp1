#pragma once
namespace leetcode_sqrt {
    class Solution {
    public:
        int mySqrt(int y) {
           /* long x = y;
            if (x == 1 || x == 0)
                return x;
            int start = 0;
            if (x < 1000000)
                start = x / 2;
            else
                start = x / 1000;
            for (int i = start; i > 1; i--) {
                auto z = i * i;
                if (z > 0 && z < 2147483647 && z <= x)
                    return i;
            }
            return -1;*/

            long x = y;
            if (x == 1 || x == 0)
                return x;
            int count = 0;
            int start = 1;
            long z = y;
            while (z > 0) {
                count++;
                z = z / 10;
                if (count > 1 && count % 2 == 1) {
                    start = start * 10;
                }
            }
            for (long i = start; i <= x; i++) {
                if (i * i == y)
                    return i;
                if (i * i > x)
                    return i - 1;
            }
            return -1;
        }
    };
};