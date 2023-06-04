class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
             while(n>0){
                 int d=n%10;
                 sum+=d;
                 prod*=d;
                 n/=10;
             }
        return prod-sum;
    }
};