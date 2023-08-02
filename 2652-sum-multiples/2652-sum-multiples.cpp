class Solution {
public:
    int sumOfMultiples(int n) {
        int SumOfAllMultiples=0;
        for(int startingNumber=1;startingNumber<=n;startingNumber++){
            if(startingNumber%3==0 ||startingNumber%5==0||startingNumber%7==0){
                SumOfAllMultiples+=startingNumber;
            }
       }
        return SumOfAllMultiples;
    }
};