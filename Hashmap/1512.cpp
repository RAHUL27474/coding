class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
    
            // Lengthy  Approach
    
            int n = nums.size();
            map<int,int>mp;
            for(int i =0;i<n;i++){
                mp[nums[i]]++;
            }int ans =0;
            for(auto it:nums){
                if(mp[it]>1){
                    mp[it]--;
                    ans+=mp[it];
                }
            }
            return ans;
    
            // Direct Approach
    
            int ans = 0;
            unordered_map<int,int>mp;
            for(auto it:nums){
                ans +=mp[it]++;
            }
            return ans;
        }
    };