class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp = 0;

        vector<int>ans;

        for(int i = 0; i < nums.size(); i++){
            temp += nums[i];
            ans.push_back(temp);
        }

        return ans;
    }
};