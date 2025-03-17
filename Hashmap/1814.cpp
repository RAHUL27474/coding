class Solution {
    public:
        int mod = 1e9+7;
        int countNicePairs(vector<int>& nums) {
            unordered_map<int,int>rev;
            int n = nums.size();
            int ans = 0;
            for(auto it: nums){
                int temp = it,num = 0;
                while(temp){
                    num = num*10 + temp%10;
                    temp /= 10;
                }
                num = num-it;
                ans = (ans +rev[num])%mod;
                rev[num]++;
            }
            return ans;
        }
    };