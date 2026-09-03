class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
        int total = 0;
        vector<int> gain(n);
        for(int i =0;i<n;i++){
            total += reward2[i];
            gain[i] = reward1[i] - reward2[i];
        }
        sort(gain.rbegin(),gain.rend());
        for(int i =0;i<k;i++){
            total += gain[i];
        }
        return total;
    }
};