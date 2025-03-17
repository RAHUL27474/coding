class SmallestInfiniteSet {
    public:
        int curr;
        set<int>st;
        SmallestInfiniteSet() {
            curr = 1;
        }
        
        int popSmallest() {
            if(st.size()!=0){
                int present = *st.begin();
                st.erase(present);
                return present;
            }else{
                return curr++;
            }
        }
        
        void addBack(int num) {
            if(curr>num)st.insert(num);
            
        }
    };
    
    /**
     * Your SmallestInfiniteSet object will be instantiated and called as such:
     * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
     * int param_1 = obj->popSmallest();
     * obj->addBack(num);
     */