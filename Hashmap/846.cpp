class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        if(hand.size()%groupSize!=0)return false;
        int total = 0;
        for(auto it: hand){
            mp[it]++;
            total++;
        }
         for (auto it = mp.begin(); it != mp.end(); it++){
            int num = it->first;
            int cnt = it->second;
            int loop = groupSize-1;
            if(cnt>0){
                for(int i =0;i<groupSize;i++){
                    if(mp[num+i]<cnt)return false;
                    mp[num+i] -=cnt;
                }
            }
        }
        return true;
    }
};