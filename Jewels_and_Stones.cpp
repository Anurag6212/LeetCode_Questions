class Solution {
public:
    int numJewelsInStones(string J, string S) {
            int cr=0;
            unordered_set<char>setJ(J.begin(),J.end());
            for(char c : S){
                    if(setJ.count(c)) cr++;
            }
                       
            return cr;
    }
};
