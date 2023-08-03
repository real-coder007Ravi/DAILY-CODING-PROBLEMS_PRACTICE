class Solution {
public:
    int pivotInteger(int n) {
       int SumOfAllIntegers=n*(n+1)/2;
        int pivotInteger=sqrt(SumOfAllIntegers);
        return pivotInteger*pivotInteger==SumOfAllIntegers?pivotInteger:-1;
         
    }
};