//tHIS SOlution will give TLE error
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> pre(26, 0), post(26, 0);
        
        pre[s[0] - 'a']++;
        
        for (int i = 1; i < n; ++i) {
            post[s[i] - 'a']++;
        }
        
        
        unordered_set<string> ans;
        string word = "aaa";
        for (int i = 1; i < n - 1; ++i) {
            post[s[i] - 'a']--;
            word[1] = s[i];
            
            for (int j = 0; j < 26; ++j) {
                if (pre[j] > 0 && post[j] > 0) {
                    char c = 'a' + j;
                    word[0] = c;
                    word[2] = c;
                    ans.insert(word);
                }
            }
            
            pre[s[i] - 'a']++;
        } 
        
        return ans.size();
    }
};

//efficient approach
int countPalindromicSubsequence(string s) {
    int first[26] = {[0 ... 25] = INT_MAX}, last[26] = {}, res = 0;
    for (int i = 0; i < s.size(); ++i) {
        first[s[i] - 'a'] = min(first[s[i] - 'a'], i);
        last[s[i] - 'a'] = i;
    }
    for (int i = 0; i < 26; ++i)
        if (first[i] != INT_MAX && first[i] != last[i])
            res += unordered_set<char>(begin(s) + first[i] + 1, begin(s) + last[i]).size();
    return res;
}

