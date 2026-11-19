class Solution {
public:
// int delete_dup(vector<int>& nums, int n, int pos){
//     for(int i=pos;i<n-1;i++)
//     {
//         nums[i]=nums[i+1];
//     }
//     n--;
//     return n;   
// }
    int removeDuplicates(vector<int>& nums) {
    // int n= nums.size();
    // for(int i=0;i<n-1; ){
    // if(nums[i]==nums[i+1])
    // {
    //     n=delete_dup(nums,n,i);
    // }
    //     else i++;
    // }
    // return n;
    int i=0;
    int j=1;
    int n=nums.size();
    while(j<n)
    {
        if(nums[i]==nums[j])
        {
            j++;
        }
        else
        {
            i++;
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return i+1;
    }
};