
class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        int n = 0;
        int m = 0;

        for(int i = 0; i < 26; i++) {
            if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
                n = max(n, freq[i]);
            }
            else {
                m = max(m, freq[i]);
            }
        }

        return n + m;
    }
};
