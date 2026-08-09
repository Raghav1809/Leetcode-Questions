class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int k = min(prices.size(), discounts.size());

        long long total = 0;
        for (int p : prices)
            total += 1LL * p * 100;

        long long savings = 0;

        for (int i = 0; i < k; i++) {
            savings += 1LL * prices[i] * discounts[i];
        }

        return (total - savings) / 100.0;
    }
};