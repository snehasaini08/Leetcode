class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return 0;

        int ans = 1 , i = 1;

        while(i<=n)
        {
            if(ans == n)
                return 1;

            if(ans > n/2)
                return 0;    
            else
                ans = i+i;

                i = ans;

        }
        return 0;


        
    }
};