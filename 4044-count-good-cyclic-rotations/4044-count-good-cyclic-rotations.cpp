class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n / 2;

        long long total = 0;
        for (long long x : nums) {
            total += x;
        }

        // First half
        long long window = 0;
        for (int i = 0; i < half; i++) {
            window += nums[i];
        }

        int ans = 0;

        // All rotations
        for (int start = 0; start < n; start++) {
            if (2 * window > total) {
                ans++;
            }

            // Move circular window
            window -= nums[start];
            window += nums[(start + half) % n];
        }

        return ans;
    }
};