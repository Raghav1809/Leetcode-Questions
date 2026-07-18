class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];

        for(int num : nums){
            maxi = max(maxi, num);
            mini = min(mini, num);
        }

        return __gcd(mini, maxi);
    }
};