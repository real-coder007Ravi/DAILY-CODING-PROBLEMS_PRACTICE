class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int res=0;
    unordered_map<int,int>Map;
    for (int a: nums) {
       res += Map[a]++;
       
    }
      return res;
}
        
        
        
        
        
        
        
//         //VARIABLE NAMING VERY IMPORTANT AND DRY RUN BEFORE THE SOLUTION VERY VERY IMPORTANT
//     int CountOfIdenticalPairs=0;
// for(int FirstElementIndex=0;FirstElementIndex<nums.size();FirstElementIndex++){
// for(int SecondElementIndex=FirstElementIndex+1;SecondElementIndex<nums.size();SecondElementIndex++){
//                 if(nums[FirstElementIndex]==nums[SecondElementIndex]){
//                     CountOfIdenticalPairs++;}
                        
//                  }
//              }
//            return CountOfIdenticalPairs;
//     }
    
      
};