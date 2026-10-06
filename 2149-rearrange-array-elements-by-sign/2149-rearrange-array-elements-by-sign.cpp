class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int k=0;
        int ips=0;
        int inv=1;
        while(k<n)
        {
            if(nums[k]>0)
            {
                ans[ips]=nums[k];
                ips+=2;
            }
            else
            {
                ans[inv]=nums[k];
                inv+=2;
            }
            k++;

        }
        return ans;
                
    }
};