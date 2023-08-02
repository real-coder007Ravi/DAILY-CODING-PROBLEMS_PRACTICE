class Solution {
public:
    // int sumOfMultiples(int n) {
    //     int SumOfAllMultiples=0;
    //     for(int startingNumber=1;startingNumber<=n;startingNumber++){
    //         if(startingNumber%3==0 ||startingNumber%5==0||startingNumber%7==0){
    //             SumOfAllMultiples+=startingNumber;
    //         }
    //    }
    //     return SumOfAllMultiples;
    // 
        int CalculateSumOfAllFcatorsOnKUptoN(int n,int k){
            return k*(n/k)*(n/k +1)/2;
        }
      int sumOfMultiples(int n) {
          return CalculateSumOfAllFcatorsOnKUptoN(n,3)+ CalculateSumOfAllFcatorsOnKUptoN(n,5)+ CalculateSumOfAllFcatorsOnKUptoN(n,7)- CalculateSumOfAllFcatorsOnKUptoN(n,3*5)- CalculateSumOfAllFcatorsOnKUptoN(n,5*7)- CalculateSumOfAllFcatorsOnKUptoN(n,7*3)+ CalculateSumOfAllFcatorsOnKUptoN(n,3*5*7);  
       }
    
};