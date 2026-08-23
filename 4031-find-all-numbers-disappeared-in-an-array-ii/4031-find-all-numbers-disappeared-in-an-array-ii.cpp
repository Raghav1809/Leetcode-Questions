class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<int> sortedNums = nums;

        sort(sortedNums.begin(), sortedNums.end());

        vector<vector<int>> ans;

        int prev = lower - 1;

        for (int num : sortedNums) {

            if (num < lower || num > upper)
                continue;

            if (num > prev + 1) {
                ans.push_back({
                    prev + 1,
                    num - 1
                });
            }

            prev = max(prev,num);
        }

        if (prev < upper) {
            ans.push_back({
                (int)(prev + 1),
                upper
            });
        }

        return ans;
    }
};