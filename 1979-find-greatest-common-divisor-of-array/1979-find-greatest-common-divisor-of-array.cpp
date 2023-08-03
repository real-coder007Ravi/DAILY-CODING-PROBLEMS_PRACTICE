class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
             if(nums[i]>maxi){
                 maxi=nums[i];
             }
        }
         for(int i=0;i<nums.size();i++){
             if(nums[i]<mini){
                 mini=nums[i];
             }
        }
        int gcd=1;
        int minimum=max(maxi,mini);
        for(int i=1;i<=minimum;i++){
            if(maxi%i==0&&mini%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};