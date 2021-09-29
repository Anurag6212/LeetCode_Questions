class Solution {
public:
    int fib(int n) 
    {
            /*if(n<1)
            {
                    return 0;
            }
            if(n==1)
            {
                    return 1;
            }
            return fib(n-1)+fib(n-2);
            */
            
            //Binet's Nth term formula
        double phi = (sqrt(5) + 1) / 2;     
        return round(pow(phi, n) / sqrt(5));
    }
    
};
