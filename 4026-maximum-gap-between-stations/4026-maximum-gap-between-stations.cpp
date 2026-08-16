class Solution {
public:
    int maximumGap(string skill, string station) {

        string input = skill;  

        int n = skill.size();
        int m = station.size();

        vector<int> left(n);
        vector<int> right(n);

        // earliest 
        int j = 0;

        for(int i = 0; i < n; i++) {

            while(station[j] != skill[i])
                j++;

            left[i] = j;
            j++;
        }

        // latest 
        j = m - 1;

        for(int i = n - 1; i >= 0; i--) {

            while(station[j] != skill[i])
                j--;

            right[i] = j;
            j--;
        }

        // Find maximum gap
        int answer = 0;

        for(int i = 1; i < n; i++) {

            answer = max(answer, right[i] - left[i - 1]);
        }

        return answer;
    }
};