class Solution {
    public:
    vector<int>ans;
    
        void dfs(int u, int prev,unordered_map<int,vector<int>> &adj ){
            ans.push_back(u);
            for(int v : adj[u]){
                if(v != prev){
                    dfs(v,u,adj);
                }
            }
        }
    
        vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
            unordered_map<int,vector<int>>adj;
            for(vector<int> vec : adjacentPairs){
                int u = vec[0];
                int v = vec[1];
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            int st = -1;
            for(auto it: adj){
                if(it.second.size()==1){
                    st = it.first;
                    break;
                }
            }
            dfs(st, INT_MIN,adj);
    
            return ans;
    
        }
    };