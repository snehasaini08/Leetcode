class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans(nums.size());
        int i = nums.size() - 1;

        int start=0;
        int tail = nums.size()-1;

        while(start<=tail)
        {
            if(nums[start]*nums[start] < nums[tail]*nums[tail])
            {
                ans[i] = nums[tail]*nums[tail];
                tail--;

            } else 
            {
                ans[i] = nums[start]*nums[start];
                start++;
            }

            i--;
        }
        return ans;
        
    }
};