class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
               int num1 = 0, num2 = 0;
    for (auto num : nums)
    {
        auto temp = max(num, min(num1, num2));
        
        num2 = max(num1, num2);
        num1 = temp;
    }
    
    return (num1 - 1) * (num2 - 1);
    }
};
