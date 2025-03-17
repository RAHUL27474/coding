class Solution {
    public:
    
        string findword(string &word, unordered_set<string>&st){
            for(int i = 0;i<word.length();i++){
                string root = word.substr(0,i);
                if(st.find(root)!= st.end()){
                    return root;
                }
            }
            return word;
        }
    
        string replaceWords(vector<string>& dictionary, string sentence) {
            unordered_set<string>st(dictionary.begin(),dictionary.end());
            stringstream ss(sentence);
            string word;
            string result;
            while(getline(ss,word,' ')){
                result += findword(word,st)+ " ";
            }
            result.pop_back();
            return result;
        }
    };