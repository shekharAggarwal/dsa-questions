class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        
        int maxSatisfaction = 0;
        int suffixSum = 0;
        for (int i = satisfaction.size() - 1; i >= 0 && suffixSum + satisfaction[i] > 0; i--) {
            suffixSum += satisfaction[i];
            maxSatisfaction += suffixSum;
        }
        
        return maxSatisfaction;
    }
};