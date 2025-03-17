class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            unordered_map<int,int>mp;
            int n = nums.size();
            long long ans = 0;
            for(int i =0;i<n;i++){
                int diff = i-nums[i];
                ans += mp[diff]++;
            }
            long long total = (1LL * n * (n-1))/2;
            return total - ans;
            
        }
    };