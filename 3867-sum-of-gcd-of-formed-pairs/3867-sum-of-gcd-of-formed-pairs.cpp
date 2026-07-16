class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int prefixGcd[n];
        int mxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(mxi<nums[i])
            mxi=nums[i];
            prefixGcd[i]=gcd(nums[i],mxi);
        }
        sort(prefixGcd,prefixGcd+n);
        int low=0;
        int high=n-1;
        while(low<high)
        {
            int cs=gcd(prefixGcd[low],prefixGcd[high]);
            sum+=cs;
            low++;
            high--;
        }
        return sum;
    }
};