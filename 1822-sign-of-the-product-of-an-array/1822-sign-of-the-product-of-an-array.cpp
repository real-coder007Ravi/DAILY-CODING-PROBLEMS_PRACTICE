class Solution {
public:
    int arraySign(vector<int>& nums) {
     int countNegative=0;
        for(int i=0;i<nums.size();i++){
         if(nums[i]<0)countNegative++;
        else if(nums[i]==0) return 0; 
     }
        if(countNegative%2!=0){
            return -1;
        }
        return 1;}
};