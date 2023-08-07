class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        for(;i<nums.size();i++){
            int count=0,j=0;
            for(;j<nums.size();j++){
                if(j!=i&&nums[i]>nums[j] )count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
