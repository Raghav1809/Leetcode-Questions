class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>sortedArray;

        for(int n : nums){
            if(n % 2 == 0) sortedArray.push_back(0);
            else sortedArray.push_back(1);
        }

        sort(sortedArray.begin(), sortedArray.end());

        return sortedArray;
    }
};