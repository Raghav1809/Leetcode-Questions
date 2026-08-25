class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int> temp;

        // Insert all elements into set
        for(int i = 0; i < nums.size(); i++) {
            temp.insert(nums[i]);
        }

        // If less than 3 distinct elements
        if(temp.size() < 3) {
            return *temp.rbegin();   // largest element
        }

        // Move iterator to the third largest element
        auto it = temp.rbegin();
        advance(it, 2);

        return *it;
    }
};