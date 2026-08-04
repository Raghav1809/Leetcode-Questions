class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int mn = nums[0];
        int mx = nums[0];

        unordered_set<int> st;

        for(int num : nums) {

            mn = min(mn, num);
            mx = max(mx, num);

            st.insert(num);
        }

        vector<int> ans;

        for(int i = mn + 1; i < mx; i++) {

            if(st.count(i) == 0)
                ans.push_back(i);
        }

        return ans;
    }
};