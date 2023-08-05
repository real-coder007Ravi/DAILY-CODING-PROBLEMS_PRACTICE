class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>Target;
        int j=0;
     
        while(j<index.size()){
            Target.insert(Target.begin()+index[j],nums[j]);
            j++;
        }
        return Target;
    }
};