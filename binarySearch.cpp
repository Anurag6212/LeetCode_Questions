class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
            int start=0;
            int end = letters.size()-1;
            
            while(start <= end)
            {
                    int mid = start + (end-start)/2;
                    if(letters[mid] < target)
                    {
                            end=mid-1;
                    }
                    else
                    {
                            start=mid+1;
                    }
                    
            }
            int mod=start %letters.size();
            return letters[mod];
            //if(letters[start] > target)
            //{
              //      return letters[start];
            //}
            //return letters[0];
    }
};
