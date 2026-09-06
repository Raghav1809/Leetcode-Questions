class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();

        int total = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n]) {
                total++;
            }
        }

        int ans = 0;

        for (int start = 0; start < n; start++) {
            int removed = (s[(start - 1 + n) % n] == s[start]);

            int score = total - removed;

            if (score == k) {
                ans++;
            }
        }

        return ans;
    }
};