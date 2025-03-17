// Solve 1
class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(char c: word){
            freq[c-'a']++;
        }
        sort(freq.rbegin(), freq.rend());
        int ans =0;
        for(int i =0;i<26;i++){
            ans = ans + freq[i]*(i/8 + 1);
        }
        return ans;
    }
};

// Solve 2
class Solution {
    public:
        int minimumPushes(string word) {
            vector<int>freq(26,0);
            for(char c: word){
                freq[c-'a']++;
            }
            sort(freq.rbegin(), freq.rend());
            vector<int>cum(26,0);
            cum[0]= freq[0];
            int ans =0;
            for(int i =1;i<26;i++){
                cum[i]= cum[i-1]+freq[i];
                
            }
            ans = 4*cum[25] - cum[23]-cum[15]-cum[7];
            return ans;
        }
    };