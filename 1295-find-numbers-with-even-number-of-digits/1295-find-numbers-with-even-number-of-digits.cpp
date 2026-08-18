class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count =0;
        for(int x : nums){
            int count_digit =0;
            while(x>0){
                int digit = x %10;
                count_digit++;
                x /= 10;
            }
            if(count_digit % 2==0){
                count++;
            }
        }
        return count;
    }
};