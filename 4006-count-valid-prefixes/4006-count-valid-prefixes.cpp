class Solution {
public:
    int countValidPrefixes(string s) {
        int ans = 0;
        int zerocount = 0;
        int onecount = 0;

        for(char ch : s){
            if(ch == '0'){
                zerocount++;
            }else{
                onecount++;
            }

            if(abs(zerocount - onecount) <= 1){
                ans++;
            }
        }
        return ans;
    }
};