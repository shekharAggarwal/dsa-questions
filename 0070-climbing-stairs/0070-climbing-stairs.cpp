class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int p = 2, p2 = 1, r;
        for (int i = 3; i <= n; i++) {
            r = p + p2;
            p2 = p;
            p = r;
        }
        return r;
    }
};