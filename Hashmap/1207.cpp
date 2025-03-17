class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
    
            // Approach 1
    
            unordered_map<int,int>mp;
            for(auto it: arr){
                mp[it]++;
            }
            unordered_set<int>st;
            for(auto it: mp){
                int freq = it.second;
                if(st.find(freq)!= st.end())return false;
                st.insert(freq);
            }
            return true;
    
            // Approach 2
    
            vector<int>v(2001,0);
            
            for(auto it:arr){
                v[it+1000]++;
            }
            sort(v.begin(),v.end());
            for(int i =1;i<2001;i++){
                if(v[i]!= 0 && v[i]==v[i-1])return false;
            }
            return true;
        }
    };