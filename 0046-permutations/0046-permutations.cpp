class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; 
        permute(0,nums,ans);
        return ans;   
        
    }
    void permute(int index,vector<int>& nums,vector<vector<int>> & ans)
    {
        int n=nums.size();
        if(index==n)
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<n;i++)
        {
            swap(nums[index],nums[i]);
            permute(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }

    }
};