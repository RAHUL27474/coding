class Solution {
    public:
        bool canArrange(vector<int>& arr, int k) {

            // Incorrect approach

            // unordered_set<int>mp,vis;
            // int n = arr.size();
            // if(n%2!=0)return false;
            // for(int i =0;i<arr.size();i++){
            //     int vec = ((arr[i]%k)+k)%k;
            //     int rem = k- vec;
            //     if(rem ==k)rem = 0;
            //     if(mp.find(rem)!= mp.end()){
            //         mp.erase(rem);
            //     }else{
            //         mp.insert(vec);
            //     }
            // }
            // return mp.size()==0;

            // Correct Approach

            unordered_map<int,int>freq;
            for(auto it: arr){
                int mod = ((it%k)+k)%k;
                freq[mod]++;
            }
            for(auto it : freq){
                int rem = it.first;
                int count =  it.second;
                if(rem==0 ){
                    if(count%2!=0)return false;
                }else if(freq[rem]!=freq[k-rem]){
                    return false;
                }
            }
            return true;
    
        }
    };