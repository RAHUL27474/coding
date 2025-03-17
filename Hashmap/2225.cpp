class Solution {
    public:
        vector<vector<int>> findWinners(vector<vector<int>>& matches) {
            map<int,int>loss;
            for(auto it:matches){
                loss[it[1]]++;
            }
            vector<int>zeros;
            vector<int>ones;
            for(auto it:matches){
                int win = it[0];
                int lose = it[1];
                if(loss.find(win)==loss.end()){
                    zeros.push_back(win);
                    loss[win] = 2;
                }
                if(loss[lose]==1){
                    ones.push_back(lose);
                    loss[lose]=2;
                }
            }
            sort(zeros.begin(), zeros.end());
            sort(ones.begin(), ones.end());
            return {zeros,ones};
        }
    };