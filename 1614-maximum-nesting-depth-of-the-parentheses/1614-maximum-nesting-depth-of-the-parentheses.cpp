class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int opencount = 0;
        int closecount = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') {
                opencount++;

                if(opencount > max) max = opencount;
            }
            if(s[i] == ')'){
                opencount--;
            }
        }
        return max;
    }
};