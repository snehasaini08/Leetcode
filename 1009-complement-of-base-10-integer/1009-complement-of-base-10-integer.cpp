class Solution {
public:
    int bitwiseComplement(int n) {
        int rem=0,ans=0,mul=1;

        if(n==0)
        return 1;

        while(n>0)
        {
            rem=n%2;
            if(rem==1)
            rem=0;
            else 
            rem=1;
            n=n/2;

            ans=rem*mul+ans;
            mul=mul*2;
        }

        return ans;
        
    }
};