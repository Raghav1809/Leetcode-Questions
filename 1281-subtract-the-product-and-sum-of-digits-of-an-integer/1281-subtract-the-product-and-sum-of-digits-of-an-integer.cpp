class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        
        int temp = n;

        while(temp > 0){
            int dig = temp % 10;
            prod *= dig;
            sum += dig;
            temp = temp / 10;
        }

        return prod - sum;
    }
};