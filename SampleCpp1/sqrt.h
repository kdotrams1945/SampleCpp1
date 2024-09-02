#pragma once
namespace leetcode_sqrt {
    class Solution {
    public:
        int mySqrt(int y) {
            long x = y;
            if (x == 1 || x == 0)
                return x;
            auto start = getStart(x);
            for (long i = start; i <= x; i++) {
                if (i * i == y)
                    return i;
                if (i * i > x)
                    return i - 1;
            }
            return -1;
        }
    private:
        int getStart(long y) {
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
            return start;

        }
    };
}