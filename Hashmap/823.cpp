class Solution {
    public:
    
        int MOD = 1e9+7;
    
        int numFactoredBinaryTrees(vector<int>& arr) {
            int n = arr.size();
            sort(arr.begin(), arr.end());
            unordered_map<int, long long>mpp;
            for(int i =0;i<n;i++){
                int root = arr[i];
                mpp[root]++;
                for(int j =0;j<i;j++){
                    int left = arr[j];
                    if(root%left == 0 && mpp.find(root/left)!=mpp.end()){
                        mpp[root]+= mpp[left]*mpp[root/left];
                    }
                }
            }
            long long res = 0;
            for(auto it:mpp){
                res = (res + it.second)%MOD;
            }
            return res;
        }
    };