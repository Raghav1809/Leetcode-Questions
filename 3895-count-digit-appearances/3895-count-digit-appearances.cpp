class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int last;
        int count = 0;
        for(int num : nums){
            while(num > 0){
            last = num % 10;
            if(last == digit){
                count++;
            }
            num /= 10;
        }
        }
        return count;
    }
};