class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxGreenTime = *max_element(lights.begin(), lights.end());

        int answer = 0;

        for(int time : arrivalTime) {

            int remainder = time % period;

            int waitTime = 0;

            if(remainder >= maxGreenTime)
                waitTime = period - remainder;

            answer = max(answer, waitTime);
        }

        return answer;
    }
};