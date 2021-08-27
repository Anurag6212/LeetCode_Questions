//pangram sentence is a sentence which is having 26 size.
class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
            set<char>s;
            for(auto& c:sentence)
            {
                    s.insert(c);
            }
            return s.size()==26;
    }
};
