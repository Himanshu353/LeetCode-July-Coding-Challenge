class Solution {
public:
    void myFxn(vector<int>&nums,vector<vector<int>>&res,vector<int>temp,int start)
    {
        res.push_back(temp);
        for(int i=start;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            myFxn(nums,res,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>>res;
        vector<int>temp;
        myFxn(nums,res,temp,0);
        return res;
    }
};
