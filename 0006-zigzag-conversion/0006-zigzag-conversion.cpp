class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
    int i, j, k;
    string ans = "";
    if (numRows == 1)
        return s;
    for (i = 0; i < numRows; i++)
    {
        for (j = i; j < n; j += 2 * (numRows - 1))
        {
            ans += s[j];
            if (i != 0 && i != numRows - 1 && j + 2 * (numRows - 1 - i) < n)
                ans += s[j + 2 * (numRows - 1 - i)];
        }
    }
    return ans; 
    }
};