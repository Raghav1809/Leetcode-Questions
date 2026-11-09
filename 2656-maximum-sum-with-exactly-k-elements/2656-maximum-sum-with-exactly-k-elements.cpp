class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxele = *max_element(nums.begin(), nums.end());

        int ans = 0;

        for(int i = 0; i < k; i++) {
            ans += maxele;
            maxele++;
        }

        return ans;
    }
};