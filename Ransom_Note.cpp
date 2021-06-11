class Solution {
public:
    bool canConstruct(string R, string M) {
            if(R.length()>M.length()) return false;
            unordered_map<char,int>map(26);
            for(int i=0;i<M.size();i++){
                    ++map[M[i]];
            }
            for(int i=0;i<R.size();i++){
                    if(--map[R[i]]<0) return false;
            }
            return true;
    }
};
